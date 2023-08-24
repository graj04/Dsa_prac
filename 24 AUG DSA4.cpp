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
	//Insertion operation
	void insert_end();
	void insert_begin();
	void insert_at_given_position(int p,int el);
	
};
void Linkedlist::insert_at_given_position(int p,int el)
{
	node *temp=new node;
	temp->data=el;
	temp->link=NULL;
	int counter=1;
	node *curr=head;
	node *pre=NULL;
	
	while(curr->link!=NULL && counter<p)
	{
		pre=curr;
		curr=curr->link;
		counter++;
	}
	if (counter==p)
	{
		pre->link=temp;
		temp->link=curr;
		
	}
	else
	cout<<"\nInvalid position..!"<<endl;
}
void Linkedlist::insert_begin()

{
	
	node *temp=new node;
	cout<<"\nEnter the data to insert at begin: ";
	cin>>temp->data;
	
	temp->link=head;
	head=temp;
	
}

void Linkedlist::insert_end()
{
	int n;
	cout<<"\n/Enter the data to insert at last : ";
	cin>>n;

	node *t=new node;
	t->data=n;
	t->link=NULL;
	if (head==NULL)
	{
		head=t;
	}
	else
	{
	node *t1=head;
	while(t1->link!=NULL)
	t1=t1->link;
	t1->link=t;
	
}
}

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
	x.insert_end();
	x.display();
	x.insert_begin();
	x.display();
	x.insert_at_given_position(3,333);
	x.insert_at_given_position(10,15);
	x.display();
	
	return 0;
}

