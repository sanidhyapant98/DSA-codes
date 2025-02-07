#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"enter the key: ";
    cin>>x;

    bool flag=false;
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<"upper bound is :";
            cout<<arr[mid+1];
            break;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    if(flag==false){
        cout<<"upper bound is: ";
        cout<<arr[start];
    }

    return 0;
}