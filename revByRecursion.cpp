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

void revRec(Node* head){
    if(head==NULL) return;
    revRec(head->next);
    cout<<head->data<<" ";
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    revRec(head);
    return 0;
}