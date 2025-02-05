#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
	for(int i=0; i<v.size(); i++){
		cout<<v[i];
	}
}

void reverse(int x, int y, vector<int>& v){
	while(x<y){
		int temp= v[x];
		v[x]=v[y];
		v[y]=temp;
		x++;
		y--;
	}
}

int main(){
	int n, element, k;
	cin>>n>>k;
	vector<int> v;
	
	for(int i=0; i<n; i++){
		cin>>element;
		v.push_back(element);
	}
	
	if(k>n){
		k=k%n;
	}
	
	reverse(0, n-k-1, v);
	reverse(n-k, n-1, v);
	reverse(0, n-1, v);
	
	display(v);
	
	return 0;
}
