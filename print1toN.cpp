#include<iostream>
using namespace std;

void printOneTwoN(int n){
    if(n==0) return;
    printOneTwoN(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"enter the value: ";
    cin>>n;

    printOneTwoN(n);
    return 0;
}