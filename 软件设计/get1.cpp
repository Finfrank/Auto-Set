#include<cstring>
#include<iostream>
using namespace std;
typedef int ElemType;
typedef int Status;
#define OK 1
#define ERROR 0
 
typedef struct LNode{
    ElemType data;  
    struct LNode *next;
}LNode,*LinkList; 
Status GetElem_L(LinkList &L,int i,ElemType &e){    
    LinkList p;
    p = L->next;
    int j = 1; 
    while (p && j < i){
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR;   
    e = p->data;
    return OK;     
}
 
Status ListInsert_L(LinkList &L,int i,ElemType e){ 
    LinkList p,s;
    p = L;
    int j = 0;
    while(p && j < i - 1)
    {
        p = p->next;
        ++j;
    }
    if(!p || j > i-1)
        return ERROR; 
    s = (LinkList)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
    } 
 
Status ListDelete_L(LinkList &L,int i,ElemType &e){
    LinkList p,q;
    p = L;
    int j = 0;
    while(p->next && j < i - 1){ 
        p = p->next;
        ++j;
    }
    if (!(p->next) || j > i-1)
        return ERROR; 
    q = p->next;
    p->next = q->next; 
    e = q->data;
    free(q);
    return OK;
} 
 
void CreateList_L(LinkList &L,int n){ 
    LinkList p;
    int i;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL; 
    for (i = n;i > 0;--i){
        p = (LinkList)malloc(sizeof(LNode));
        cin >> p->data; 
        p->next = L->next;
        L->next = p; 
    }
} 
 
void ShowList_L(LinkList &L)
{ 
    LinkList p = L->next;
    if(p == NULL)
    {   cout << "Link list is empty" << endl;
        return;}
    while(p != NULL)
    {
        if(p->next == NULL)
            cout << p->data;
        else cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
 
int main()
{
    int n = 0,m = 0,num = 0;
    ElemType e;
    char str_Instruction[10];
    LinkList List;
    cin >> n;
    CreateList_L(List,n);
    cin >> m;
    while(m--)
    {
        cin >> str_Instruction;
        if(!strcmp(str_Instruction,"get"))
            {
            cin >> num;
            if(GetElem_L(List,num,e))
                cout << e << endl;
            else
                cout << "get fail" << endl;
            }
 
        else if(!strcmp(str_Instruction,"delete"))
        {
            cin >> num;
            if(ListDelete_L(List,num,e))
                cout << "delete OK" << endl;
            else
                cout << "delete fail" << endl;
        }
        else if(!strcmp(str_Instruction,"insert"))
        {
            cin >> num >> e;
            if(ListInsert_L(List,num,e))
                cout << "insert OK" << endl;
            else
                cout << "insert fail" << endl;
        }
        else if(!strcmp(str_Instruction,"show"))
            ShowList_L(List);
    }
}