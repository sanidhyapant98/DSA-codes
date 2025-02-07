#include<iostream>
#include<vector>
using namespace std;

void swapping(int x, int y, vector<int>& v){
	while(x<y){
		int temp = v[x];
        v[x] = v[y];
        v[y] = temp;
        x++;
        y--;
	}
}

void display(vector<int>& v){
	for(int i=0; i<=v.size()-1; i++){
		cout<<v[i]<<" ";
	}
}

int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int element;
		cin>>element;
		v.push_back(element);
	}
	swapping(2,4,v);
	display(v);
	
	return 0;
}
