#include<bits/stdc++.h>
using namespace std;

bool isrepeat(int a){
	unordered_map<int,int>mapp;
	if(a<10) return true;
    else
     while(a){
     	if(mapp[a%10]++) return true;
     	
    else{
     	mapp[a%10]++;
     	a = a/10;
	 }
}
    return false;
}


int main(){
	int count =0;
	for(int i=101;i<=202;i++){
		if(!isrepeat(i))count+=1;
	}
	cout<<count;
	return 0;
}
