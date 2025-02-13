//majority element in this case is the element which apperars more than n/2 times
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    sort(v.begin(), v.end());
    cout<<"the majority element is: ";
    cout<<v[n/2];

    return 0;
}
