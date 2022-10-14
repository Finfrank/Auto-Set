#include<stdio.h>
const int N=500007;
struct Node
{
    int data;
    Node *left,*right;
}node[N];
void A(int x,int y)
{
    Node *p = &node[x],*q = &node[y];
    p->right->left=p->left;
    p->left->right=p->right;
    p->right=q;
    p->left=q->left;
    q->left->right=p;
    q->left=p;
}
void B(int x,int y)
{
    Node *p = &node[x],*q = &node[y];
    p->right->left = p->left;
    p->left->right = p->right;
    p->left = q;
    p->right = q->right;
    q->right->left = p;
    q->right = p;
}
int main()
{
    int n,m;
    char c;
    int x,y;
    scanf("%d%d",&n,&m);
    for(int i = 1;i <= n;i++)
    {
        node[i].data = i;
        node[i].right = &node[i+1];
        node[i+1].left= &node[i];
    }
    node[0].left = NULL;
    node[0].right = &node[1];
    node[1].left = &node[0];
    node[n+1].right = NULL;
    while(m--)
    {
        getchar();
        scanf("%c%d%d",&c,&x,&y);
        if(c == 'A')A(x,y);
        else B(x,y);
    }
    Node *l = &node[0];
    l = l->right;
    while(l->right)
    {
        printf("%d ",l->data);
        l = l->right;
    }
}