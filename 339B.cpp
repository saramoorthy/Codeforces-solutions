/*
 * 339B
 * Xenia lives in a city that has n houses built along the main ringroad. The ringroad houses are numbered 1 through n in the clockwise order. The ringroad traffic is one way and also is clockwise.

Xenia has recently moved into the ringroad house number 1. As a result, she's got m things to do. In order to complete the i-th task, she needs to be in the house number ai and complete all tasks with numbers less than i. Initially, Xenia is in the house number 1, find the minimum time she needs to complete all her tasks if moving from a house to a neighboring one along the ringroad takes one unit of time.
*/



#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, m;
    long long ans=0;
    cin>>n>>m;
    int a[m];

    for(int i=0; i<m; i++){
        cin>>a[i];
    }

    ans = ans + a[0]-1;
    for(int i=1; i<m;i++){
        if(a[i]>=a[i-1])
            ans = ans + (a[i]-a[i-1]);
        else
            ans = ans + (n-a[i-1]+a[i]); 

    }
    cout<<ans<<endl;

    return 0;
}
