#include<iostream>
using namespace std;
class Node
{
 public:
 	int data;
 	Node* next;
 	Node (int x)
 	{
 		data = x;
 		next = NULL;
	 }
};
Node* insertAtEnd (Node* head,int x){
//Create Node At Last
Node* newNode = new Node(x);
//if linklist is empty
if(head == NULL)
{
	return newNode;
}
Node* last = head;
while (last->next  != NULL)
{
	last = last->next;
}
last->next = newNode;
return head;
}
void printlist(Node* node)
{
	while(node != NULL)                      
	{
		cout<<node->data;
		if(node->next != NULL)
		{
			cout<<"->";
		}
		node = node->next;
	}
}
	int main()
	{
	
	Node* head=new Node(1);
	head->next =new Node(2);
	head->next->next =new Node(3);
	head->next->next->next =new Node(4);
	head->next->next->next->next =new Node(5);
	head = insertAtEnd(head,6);
	printlist(head);
	return 0;	

}
// o/p=1->2->3->4->5->6

