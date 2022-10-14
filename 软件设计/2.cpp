#include<iostream>
using namespace std;
struct Node
{
    int exp;
    double a;
    struct Node *next;
};
void save(struct  Node *head)
{
    int a;
    float b;
    struct Node *p,*k=head;
    cin>>b>>a;
    while(a>=0)
    {
        p= new Node;
        p->exp=a,p->a=b;
        p->next=head;
        k->next=p,k=p;
        cin>>b>>a;
    }
    return;
}
void initpoly(struct Node *head)
{
    head->next=head;
    head->exp=-1;
}
int main()
{

}