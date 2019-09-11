//486A - Calculating Function
//
//https://codeforces.com/problemset/problem/486/A
//
//
//For a positive integer n let's define a function f:
//
//f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn
//
//Your task is to calculate f(n) for a given integer n.
//
//Input
//The single line contains the positive integer n (1 ≤ n ≤ 1015).
//
//Output
//Print f(n) in a single line.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long int ans=0;
    if(n%2==0)
        ans=n/2;
    else
        ans=-(n+1)/2;
    cout<<ans<<endl;
    
    return 0;
}

