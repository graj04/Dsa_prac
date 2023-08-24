#include <iostream>
#include<string.h>
using namespace std;


class node{
	public:
		int data;
		node *link;
};
class Linkedlist
{
	public:
	node *head=NULL;
	Linkedlist()
	{
		head=NULL;
	}
	
	void create();
	void display();
	
	
};

void Linkedlist::create()
{
	
	node *temp=new node;
	int n;
	cout<<"Enter the value to insert in the node:  ";
	cin>>n;
	temp->data=n;
	temp->link=NULL;
	if (head==NULL)
	{
		head=temp;
	}
	else
	{
	node *t=head;
	while(t->link!=NULL)
	t=t->link;
	t->link=temp;
	}	
}
void Linkedlist::display()
{
	node *temp=head;
	cout<<"The Linked list :"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<"==>";
		temp=temp->link;
		
	}
	cout<<"NULL";
}

int main()
{
	Linkedlist x;
	x.create();
	x.create();
	x.create();
	x.create();
	x.display();
	
	return 0;
}













//{
//	int main()
//	node *e1, *e2, *e3;
//	e1->data=5;
//	e1->link=e2;
//	
//	e2->data=7;
//	e2->link=e3;
//	
//	e3->data=9;
//	e3->linl=NULL;
//}
//struct emp
//{
//	int id;
//	 string name;
//	float fee;
//	struct emp *p;
//}s;
//int main()
//{
//	struct emp e1,e2,e3;
//	e1.p=&e2;
//	e2.p=&e3;
//	e3.p=NULL;
//	return 0;
//	
//}
//
//




 
//
//int main()
//{
//	struct emp e;
//	struct emp *p;
//	
//	p=&e;
//	
//	e.id=1544;
//	e.name="CSE";
//	e.fee=154512.484;
//	
//	cout<<"ID :"<<e.id<<endl;
//	cout<<"Name :"<<e.name<<endl;
//	cout<<"Fee :"<<e.fee<<endl;
//	
//	p->id=45;  //pointer variable mein (.) ki jagah (->) use hota hai.
//	p->name="sumo ali khan";
//	p->fee=454;
//	
//	cout<<"ID :"<<p->id<<endl;
//	cout<<"Name :"<<p->name<<endl;
//	cout<<"Fee :"<<p->fee<<endl;
//	
	

