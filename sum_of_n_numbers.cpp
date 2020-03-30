#include<iostream>
#include<stdio.h>
using namespace std;

int RSum(int n){
	if(n>0)
		return RSum(n-1)+n;
	return 0;
}

int ISum(int n){
	int sum=0;
	for(int i=1; i<=n; i++){
		sum = sum+i;
	}
	return sum;
}

int main(){
	cout<<"RSum: "<<RSum(4)<<endl;
	cout<<"ISum: "<<ISum(4)<<endl;
	return 0;
}



