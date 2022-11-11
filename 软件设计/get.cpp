#include <iostream>
#include <cstring>
using namespace std;
struct Lnode {
	int data; 
	Lnode *next; 
};
void Init(Lnode *&head) 
{
	int input, n;
	scanf("%d", &n);
	while (n--) 
    {
		scanf("%d", &input);
		Lnode *p = new Lnode;
		p->data = input;
		p->next = head->next;
		head->next = p;
	} 
} 
int Get(Lnode *&head) 
{
	int pos;
	scanf("%d", &pos);
	Lnode *p = head;
	while (p&&pos--) p= p->next; 
	if (p) 
		printf("%d\n", p->data);
	else
		cout<<"get fail"<<endl;
}
int Insert(Lnode *&head) 
{
	int pos, x;
	scanf("%d%d", &pos, &x);
	Lnode *p = head;
	--pos;
	while (pos-- && p)
		p = p->next;
	if (p) 
    {
		Lnode *temp = new Lnode;
		temp->data = x;
		temp->next = p->next;
		p->next = temp;
		cout<<"insert OK"<<endl;
	} 
    else
		cout<<"insert fail"<<endl;
    
}
int Del(Lnode *&head) 
{
	int pos;
	scanf("%d", &pos);
	Lnode *p = head;
	--pos;
	while (pos-- && p->next)
		p = p->next;
	if (p->next) {
		Lnode *q = p->next;
		p->next = q->next;
		delete(q); 
		cout<<"delete OK"<<endl;
	} else
		cout<<"delete fail"<<endl;
} 
void Show(Lnode *&head) 
{
	Lnode *p = head->next;
	if (p) {
		while (p) {
			printf("%d ", p->data);
			p = p->next;
		}
        cout<<endl; 
	} 
    else
		cout<<"Link list is empty"<<endl;
} 
int main() 
{
	int n;
	string c;
	Lnode *head = new Lnode;
	head->next = nullptr;
	Init(head);
	scanf("%d", &n);
	while (n--) 
    {
		cin>>c;
		if (c=="show") Show(head);
		else if (c== "get") Get(head);
		else if (c== "insert") Insert(head);
		else if (c=="delete")Del(head);
	} 
} 
