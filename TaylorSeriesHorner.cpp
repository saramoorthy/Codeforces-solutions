#include<iostream>
#include<stdio.h>

using namespace std;

double eH(int x, int n){
    static double ans;
    
    if(n == 0)
        return ans;
    ans = 1+ x * ans/n;
    
    return eH(x, n-1);

    
}
int main(){

    cout<<eH(1,10)<<endl;
    return 0;
}
