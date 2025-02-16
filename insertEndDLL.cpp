#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
	Node(int x){
		data=x;
		prev=NULL;
		next=NULL;
	}
};

Node* insertEnd(Node* head, int x){
	Node* temp=new Node(x);
	if(head==NULL){
		return temp;
	}
	Node* curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
	temp->prev=curr;
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
	Node* temp1=new Node(20);
	Node* temp2=new Node(30);
	Node* temp3=new Node(40);
	
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	temp2->next=temp3;
	temp3->prev=temp2;
	
	head=insertEnd(head, 50);
	printlist(head);
	
	return 0;
}
