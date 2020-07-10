#include<iostream>
#include<stdio.h>

using namespace std;

float e(int x, int n){
    static float pow = 1;
    static float fact = 1;
    static float ans = 0;
    if(n==0)
        return 1;

    ans = e(x, n-1);

    pow = pow * x;
    fact = fact * n;

    return ans+ pow/fact;
    
}



int main(){

    cout<<e(3,10)<<endl;
    return 0;
}
