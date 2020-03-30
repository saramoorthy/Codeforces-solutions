#include<iostream>
#include<stdio.h>
using namespace std;

int Rfact(int n){
	if(n>0){
		return Rfact(n-1)*n;
	}
	return 1;
}

int IFact(int n){
	int ans=1;
	for(int i=1; i<=n; i++){
		ans = ans * i;
	}
	return ans;
}

int main(){

	cout<<Rfact(5)<<endl;
	cout<<IFact(5)<<endl;
}
