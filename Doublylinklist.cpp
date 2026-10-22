#include<iostream>
using namespace std;
class Node
{public:
	int data;
	Node*next;
	Node*prev;
	Node(int x)
	{
		data = x;
		next = NULL;
		prev = NULL;
	}
};
	
class Doublylist
{
	public:
	Node*head;
	Node*tail;
	
		Doublylist()
{
	head=tail=NULL;
}
void print()
{
	Node*temp=head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"NULL \n";
}
};
int main()
{//First node
Node*head=new Node(1);
//Second Node
head->next=new Node(2);
//Another Node
head->next->prev=head;
head->next->next=new Node(3);
head->next->next->prev=head->next;

Doublylist dll;
dll.head = head;
dll.tail = head->next->next;
dll.print();
return 0;
//getch();
}

// o/p= 1 2 3 NULL

