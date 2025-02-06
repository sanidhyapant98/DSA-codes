#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int i=0;
	while(str[i]!='\0'){
		if(i%2==0){
			str[i]='a';
		}
		i++;
	}
	cout<<str;

	return 0;
}
