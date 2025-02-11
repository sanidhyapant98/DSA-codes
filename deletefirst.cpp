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

void printlist(Node* head){
	Node* curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

Node* deletefirst(Node* head){
	Node* temp=head;
	if(head==NULL){
		delete head;
		return NULL;
	}
	head=head->next;
	delete temp;
	return head;
}

int main(){
	Node* head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	
	head=deletefirst(head);
	printlist(head);
	return 0;
}
