#include <iostream>
using namespace std;
const int N=500007;
typedef struct node
{
    int data;
    struct node *left,*right;
}node[N];
typedef long long int;
node *head = NULL;
void create(int n) 
{                  
	node *p=head,*s;
	for(int i=1;i<=n;i++)
	{
		node[i].data = i;
		node[i].right = &node[i+1];
		node[i+1].left=&node[i];
	}
}
void a(int num1,int num2) 
{
	node *p=head,*q,*s=head;
	while(p->data!=num1)
	{
		q=p;
		p=p->next;
	}
	q->next=p->next;
	while(s->data!=num2)
	{
		q=s;
		s=s->next;
	}
	q->next=p;
	p->next=s;
}
void b(int num1,int num2)
{
	node *p=head,*q,*s=head;
	while(p->data!=num1)
	{
		q=p;
		p=p->next;
	}
	q->next=p->next;
	while(s->data!=num2)
	{
		s=s->next;
		q=s->next;
	}
	s->next=p;
	p->next=q;
}
int main()
{
    int n,m,x,y;
    scanf("%d%d",&n,&m);
    create(n+1);
    while(m--)
    {
        getchar();
    char c;
    scanf("%c%d%d",&c,&x,&y);
    if(c=='A') a(x,y);
    else b(x,y);
    }
    node *p=head;
	p=p->next;
	while(p->next!=NULL)
	{
        printf("%d ",p->data);
		p=p->next;
	}
}