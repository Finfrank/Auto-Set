#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
#include<iomanip>
#include<cstring>
#include<list>
#include<queue>
#include<map>
#include<set>
using namespace std;
typedef struct Tnode{
    char data;
    int l,r;
    char q;
    struct Tnode *lchild,*rchild;
}*BTree,Tree[13];

// void qian(BTree Btree)
// {
//     if(Btree)
//     {
//         printf("%c ",Btree->data);
//         qian(Btree->lchild);
//         qian(Btree->rchild);
//     }
//     return;
// }

// void zhong( BTree Btree)
// {
//     if(Btree)
//     {
//         zhong(Btree->lchild);
//         printf("%c ", Btree->data);
//         zhong(Btree->rchild);
//     }
//     return;
// }

// void hou(BTree Btree)
// {
//     if(Btree)
//     {
//         qian(Btree->lchild);
//         qian(Btree->rchild);
//         printf("%c ", Btree->data);
//     }
//     return;
// }

// void CreateBiTree(BTree &A)
// {

//     char c = getchar();
//     if(c==' ') A=NULL;
//     else
//     {
//         A = new Tnode;
//         A->data = c;
//         CreateBiTree(A->lchild);
//         CreateBiTree(A->rchild);
//     }
// }

// int findroot(Tnode a[])
// {
//     int n,num[15]={0},root=-1,i;
//     cin>>n;
//     char c,b;
//     if(n)
//     {
//         for(i = 0; i < n; i++)
//         {
//             getchar();
//             cin>>a[i].q>>c>>b;
//             if(c!='-')
//             {
//                 a[i].l = c - '0';
//                 num[a[i].l] = 1;
//             } 
//             else a[i].l=-1;
//             if(b!='-')
//             {
//                 a[i].r = b - '0';
//                 num[a[i].r] = 1;
//             } 
//             else a[i].r=-1;
//         }
//         for(i = 0; i < n; i++) if(!num[i]) break;
//         root = i; 
//     }
//     return root;
// }
string s;
int init=0;
void CreateTree(BTree *a){
    BTree L=(*a);
    char q;
    q=s[init++];
    if(q=='#') {(*a)=NULL;return;}
    else
    {
        (*a)=(BTree)malloc(sizeof(Tnode));
        if(!*a) return;
        (*a)->data=q;
        CreateTree(&(*a)->lchild);
        CreateTree(&(*a)->rchild);
    }
}
bool IsCompleteBiTree(BTree root) {
	if (root == NULL) {
		return 0;
	}
	queue<Tnode*>Q;
	Tnode* cur = root;
	Q.push(cur);
	while (!Q.empty()) {
		Tnode* tmp = Q.front();
		Q.pop();
		if (tmp == NULL) {
			while (!Q.empty()) {
				tmp = Q.front();
				Q.pop();
				if (tmp != NULL) {
					return false;
				}
			}
			return true;
		}
		Q.push(tmp->lchild);
		Q.push(tmp->rchild);
	}
}

int main(int argc,char const *argv[]) {
    while(getline(cin,s)){
    BTree a;
    a=NULL;
    CreateTree(&a);
    if(IsCompleteBiTree(a)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }}



    
    // Tree a1,a2;
    // int t1=findroot(a1);
    // int t2=findroot(a2);
    // if(t1>=0&&t2>=0){
    // cout<<a1[t1].q<<endl;
    // cout<<a2[t2].q<<endl;
    // }




    // BTree Btree;
    // CreateBiTree(Btree);
    // qian(Btree);cout<<endl;
    // zhong(Btree);cout<<endl;
    // zhong(Btree);cout<<endl;

// void CreateBiTree(BiTree *T){
//     *T=(BiTNode*)malloc(sizeof(BiTNode));
//     (*T)->data=1;
//     (*T)->lchild=(BiTNode*)malloc(sizeof(BiTNode));
//     (*T)->lchild->data=2;
//     (*T)->rchild=(BiTNode*)malloc(sizeof(BiTNode));
//     (*T)->rchild->data=3;
//     (*T)->rchild->lchild=NULL;
//     (*T)->rchild->rchild=NULL;
//     (*T)->lchild->lchild=(BiTNode*)malloc(sizeof(BiTNode));
//     (*T)->lchild->lchild->data=4;
//     (*T)->lchild->rchild=NULL;
//     (*T)->lchild->lchild->lchild=NULL;
//     (*T)->lchild->lchild->rchild=NULL;
// }