#include<iostream>
#include<stdio.h>

using namespace std;

int pow1(int a, int n){

    if(n == 0)
        return 1;
    return pow1(a, n-1)*a;
}

int pow2(int a, int n){

    if(n == 0)
        return 1;

    if(n%2 == 0)
        return pow2(a*a,n/2);
    else
        return a*pow2(a*a,(n-1)/2);

}

int main(){

    cout<<pow1(2,3)<<endl;
    cout<<pow2(2,3)<<endl;
    return 0;
}
