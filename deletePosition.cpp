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

Node* deleteposition(Node* head, int p){
	Node* curr=head;
	int count=1;
	while(count<p-1 && curr->next!=NULL){
		curr=curr->next;
		count++;
	}
	Node* temp=curr->next;
	curr->next=curr->next->next;
	delete temp;
	return head;
}

int main(){
	Node* head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	
	head=deleteposition(head, 5);
	printlist(head);
	
	return 0;
}
