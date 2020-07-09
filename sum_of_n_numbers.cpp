#include<iostream>
#include<stdio.h>
using namespace std;

int Rsum(int n){

	if(n==0){
		return 0;
	}
	return Rsum(n-1)+n;

}

int ISum(int n){

	int ans=0;
	for(int i=i;i<=n; i++){
		ans = ans+i;
	}
	return ans;
}

int main(){
	
        int Rans = 0;
	int IAns = 0;
	Rans = Rsum(5);
	IAns = ISum(5);
	cout<<IAns<<endl;
	return 0;
}



