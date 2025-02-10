#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node* insertBegin(Node* head, int x){
	Node* temp = new Node(x);
	temp->next = head;
	return temp;
}

void printlist(Node* head){
	Node* curr = head;
	while(curr != NULL){
		cout << curr->data << " ";
		curr = curr->next;
	}
}

int main(){
	Node* head = new Node(60);
	head->next = new Node(50);
	head->next->next = new Node(40);
	
	head = insertBegin(head, 30);
	head = insertBegin(head, 20);
	head = insertBegin(head, 10);
	
	printlist(head);
	return 0;
}
