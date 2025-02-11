#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

Node* deletelast(Node* head){
	Node* curr=head;
	if(head==NULL){
		return NULL;
	}
	if(curr->next==NULL){
		delete curr;
		return NULL;
	}
	while(curr->next->next!=NULL){
		curr=curr->next;
	}
	delete curr->next;
	curr->next=NULL;
	return head;
}

void printlist(Node* head){
	Node* curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

int main(){
	Node* head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	
	head=deletelast(head);
	printlist(head);	
	return 0;
}


















