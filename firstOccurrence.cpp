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
    
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            if(arr[mid-1]==x){
                end=mid-1;
            }
            else{
                cout<<"1st occ is at index: "<<mid;
                break;  
            }
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    return 0;
}