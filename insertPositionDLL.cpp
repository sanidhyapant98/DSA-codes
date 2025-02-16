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

Node* insertPosition(Node* head, int x, int p){
	int count=1;
	Node* temp=new Node(x);
	Node* curr=head;
	while(count<p-1){
		curr=curr->next;
		count++;
	}
	temp->next=curr->next;
	if(curr->next!=NULL){
		curr->next->prev=temp;
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
	
	head=insertPosition(head, 35, 4);
	printlist(head);
	
	return 0;
}
