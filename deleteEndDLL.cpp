#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
	Node(int x){
		data=x;
		prev=NULL;
		next=NULL;
	}
};

void printlist(Node* head){
	Node* curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

Node* deleteend(Node* head){
	Node* curr=head;
	while(curr->next!=NULL){          //this line stops at last node 
		curr=curr->next;
	}
	curr->prev->next=curr->next;     //in this line we are assigning the second last node to NULL, curr->next is NULL here
	delete curr;
	return head;
}

int main(){
	Node* head=new Node(10);
	Node* temp1=new Node(20);
	Node* temp2=new Node(30);
	
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	
	head=deleteend(head);
	printlist(head);
	
	return 0;
}
