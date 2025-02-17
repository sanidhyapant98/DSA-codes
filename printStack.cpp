#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	
	while(s.size()>0){
		cout<<s.top()<<" ";
		s.pop();
	}
	
	return 0;
}
