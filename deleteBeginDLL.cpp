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

Node* deletebegin(Node* head){
	Node* temp=head;
	head=head->next;
	if(head->next!=NULL){
		head->prev=NULL;
	}
	delete temp;
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
	
	head=deletebegin(head);
	printlist(head);
	
	return 0;
}
