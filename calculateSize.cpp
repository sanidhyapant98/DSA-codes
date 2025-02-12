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

int size(Node* head){
    Node* curr=head;
    int n=0;
    while(curr!=NULL){
        n++;
        curr=curr->next;
    }
    return n;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    cout<<"the size is: "<<size(head);

    return 0;
}