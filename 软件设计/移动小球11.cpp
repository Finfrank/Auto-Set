#include <iostream>
#include <istream>
using namespace std;  
struct Node
{
	int data;
	Node* prior;
	Node* next;
};

typedef Node* List;

//初始化
void InitList(List& list)
{
	list = new Node;
	list->prior = NULL;
	list->next = NULL;
}

//尾插
List AddNode_off(List& list, int data1, List num)
{
	Node* p;
	p = list;

	num->data = data1;
	num->next = NULL;
	num->prior = p;
	p->next = num;
	return num;
}

//在节点前插入,并删除原节点
void AddNode_before(List& list, List p, List q)
{
	if (p->next == NULL)
	{
		p->prior->next = NULL;
	}
	else
	{
		p->prior->next = p->next;
		p->next->prior = p->prior;
	}

	p->prior = q->prior;
	p->next = q;
	q->prior->next = p;
	q->prior = p;

}

//在节点后插入
void AddNode_after(List& list, List p, List q)
{
	if (p->next == NULL)
	{
		p->prior->next = NULL;
	}
	else
	{
		p->prior->next = p->next;
		p->next->prior = p->prior;
	}

	if (q->next == NULL)
	{
		p->next = NULL;
		p->prior = q;
		q->next = p;
	}
	else
	{
		p->prior = q;
		p->next = q->next;
		q->next->prior = p;
		q->next = p;
	}
}

//输出
void PrintList(const List& list)
{
	List p;
	p = list->next;
	while (p)
	{
		cout << p->data << " ";

		p = p->next;
	}
	cout << endl;
}

int main()
{
	int n,m;
	List a;
	scanf("%d%d",&n,&m);
	InitList(a);
	



}