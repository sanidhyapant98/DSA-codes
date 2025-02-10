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

Node* insertend(Node* head, int x){
	Node* temp=new Node(x);
	if(head==NULL){
		head=temp;
	}
	Node* curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
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
	
	head=insertend(head, 50);
	printlist(head);
	
	return 0;
	
	
	
	
}
