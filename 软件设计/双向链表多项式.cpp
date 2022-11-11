#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <iostream>
using namespace std;

struct node
{ int  exp;       //指数为整型
  double  coef;   //系数为双精度型
  struct  node *next;     //指针域
};

void init_poly(struct node *head)
{ 
  head->next= head;
  head->exp=-1;
};

void create_poly(struct node *head) 
{ struct node *p,*k;
  int e;
  int c;
  k=head;    //记住和多项式链尾
  cin >>c >>e;
  while (e>=0){ 
    p=new node;  //申请一个新结点
    p->exp=e; p->coef=c;  //填入指数与系数
    p->next=head;    //新结点链到临时多项式链尾
    k->next=p; k=p;     //记住多项式链尾
    cin >>c >>e;
  }
  return;
}
void prt_poly(struct node *head)
{ struct node *k;
  k=head->next;
  while (k!=head)
	  { cout <<k->coef <<" " <<k->exp <<endl;
	    k=k->next;
	  }
  return;
}
void add(struct node *p2, struct node *p1,struct node *p_add)
{ struct node *rear_add, *q, *m, *n;  int e;  int c;
  rear_add=p_add->next;   //记住和多项式链尾
  m=p1->next;
  n=p2->next;
  while ((m->exp!=-1)||(n->exp!=-1))
  { 
    if (m->exp==n->exp)   //两个链表当前结点的指数相等
	    { c=m->coef+n->coef;   //系数相加
        e=m->exp;      //复抄指数
	      m=m->next; n=n->next;      }
    else if (m->exp>n->exp){ 
      c=m->coef; e=m->exp;  //复抄链表1中的系数与指数值
		  m=m->next;      } 
    else{
      c=n->coef; e=n->exp;  //复抄链表2中的系数与指数值
		  n=n->next;		  }
    if (c!=0)  //相加后系数不为0
		{ q=new node;  //申请一个新结点
		  q->exp=e; 
      q->coef=c;
		  q->next=p_add; 
      rear_add->next=q;
		  rear_add=q;    //记住和多项式的链尾
    }
	}
  
}
void InsertList(struct node *&L,struct node *e)
{ 
	struct node *r,*s;//r是循环用的结点指针，s是插入的新结点
	r = L;
	while(r->next!=NULL && e->exp < r->next->exp)//以指数决定插入的位置
		r = r->next;
	if(r->next != NULL && e->exp == r->next->exp)//指数相等
		r->next->coef += e->coef;  //系数相加
	else
	{
		s = new node;
		s->coef= e->coef;	s->exp = e->exp;
		s->next = r->next;
		r->next = s;
	}
}
void mult(struct node *head1, struct node *head2,struct node *mul)
{
  struct node *rear_add,*m, *n;  int e;  int c;
  struct node *q=(struct node *)malloc(sizeof(struct node));
  struct node *sum=(struct node *)malloc(sizeof(struct node));
  m=head1->next;
  while(m->exp>=0)
  { 
	n=head2->next;
	while(n->exp>=0)
	{
		q->exp =  m->exp + n->exp;
		q->coef = m->coef * n->coef; 
		InsertList(mul,q);
		n=n->next;      
	}
	m=m->next;
  }
}
int main(int argc, char const *argv[])
{ 
  struct node *head1=(struct node *)malloc(sizeof(struct node));
  struct node *head2=(struct node *)malloc(sizeof(struct node));
  init_poly(head1);init_poly(head2);
  create_poly(head1);
  create_poly(head2);
  struct node *head_mul=(struct node *)malloc(sizeof(struct node));
  init_poly(head_mul);
  mult(head1,head2,head_mul);
  prt_poly(head_mul);
}
