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

void printlist(Node* head){
	Node* curr = head;
	while(curr != NULL){
		cout << curr->data << " ";
		curr = curr->next; 
	}
}

Node* insertBegin(Node* head, int x){
	Node* temp = new Node(x);
	temp->next = head;
	return temp;
}

Node* insertPosition(Node* head, int p, int x){
	if(p == 1){
		return insertBegin(head, x);
	}
	Node* curr = head;
	int count = 1;
	while(count < p-1){
		curr = curr->next;
		count++;
	}
	Node* temp = new Node(x);
	temp->next = curr->next;
	curr->next = temp;
	return head;
}

int main(){
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	
	head = insertPosition(head, 3, 25);
	
	printlist(head);
	return 0;
}
