#include<iostream>
#include<stdio.h>

using namespace std;

double e(double x, double n){
	static double ans=1.0;
	if(n>0){
		ans = 1.0+(x/n)*ans;	
		e(x,n-1);
	}
    return ans;
}
int main(){

	cout<<e(1,10)<<endl;
	return 0;
}
