#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s){
	while(s.size()>0){
		cout<<s.top()<<" ";
		s.pop();
	}
}


void pushBottom(stack<int>& s, int x){
	stack<int> temp;
	while(s.size()>0){
		temp.push(s.top());
		s.pop();
	}
	s.push(x);
	while(temp.size()>0){
		s.push(temp.top());
		temp.pop();
	}
}

int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	
	pushBottom(s, 0);
	printStack(s);
	
	return 0;
}
