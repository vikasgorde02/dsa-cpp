 #include<iostream>
 using namespace std;
 class Node{
 	public:
 		int data;
 		Node*next;
 		
 		Node(int x){
 			data=x;
 			next = NULL;
		 }
 };
 Node* insertAtBegining(Node* last,int key){
 	Node* newNode=new Node(key);
 	
 	if(last==NULL){
	 
	 newNode->next=newNode;
	 return newNode;
 }
 newNode->next=last->next;
 last->next = newNode;
 return last;
}
void printList(Node*last){
	if(last==NULL)return;
	
	Node*head=last->next;
	Node*temp=head;
	
	do{
		cout<<temp->data;
		temp=temp->next;
		if(temp!=head)cout<<"->";
	}
	while(temp!=head);
	
	cout<<endl;
}

int main()
{
	//Create Circular linmlist:2->3->4
	Node*first=new Node(2);
	first->next=new Node(3);
	first->next->next=new Node(4);
	
	Node*last=first->next->next;
	last->next=first;
	
	//insert 5 at the Beginning
	last=insertAtBegining(last,5);
	printList(last);
	return 0;
}

// o/p= 5->2->3->4
