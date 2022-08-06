#include<bits/stdc++.h>
using namespace std;

void rotate(int k,vector<int>array){

  unordered_map<int,int>mapp;
  
  for(int i=0;i<array.size();i++)	mapp[array[i]] = i;
  
  for( auto x: mapp) array[(x.second+k)%array.size()] = x.first;
  
  for(auto x: array) cout<<x<<" ";
}





int main(){
	int a,k;
		cin>>a;
	    cin>>k;
	    vector<int>array;
	    int x;
	    
	    for(int i=0; i<a; i++){
	    	cin>>x;
	    	array.push_back(x);
		}
	    
	rotate(abs(array.size()-k),array);
	
	
	return 0;
}
