#include<bits/stdc++.h>
using namespace std;

class Problem
{
	public:
	
	void go(vector<int>arr){
		
		vector<int>temp; 
		for(int i=0;i<arr.size();i++)	if(arr[i]%10 != 0) temp.push_back(arr[i]);
		for(int i=0;i<arr.size();i++)	if(arr[i]%10 == 0) temp.push_back(arr[i]);
		for(auto x: arr) cout<<x<<" ";
	}
	
};


int main(){
	int a;
	cin>> a;  // size of array 
	vector<int>tet;  // creating vector aray 
	int an;
	for(int i=0;i<a;i++){
		cin>>an;
		tet.push_back(an);
	}
	
	
	Problem solution;
	
	solution.go(tet);
	
	
}
