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

int main(){
	//initializing
	Node* head = new Node(10);
	Node* temp1 = new Node(20);
	//setting connnection
	head->next = temp1;
	temp1->next = NULL;
	//printing the LL
	cout << head->data << "->" << temp1->data;
	return 0;
}
