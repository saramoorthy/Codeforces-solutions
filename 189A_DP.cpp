/*
 *
 * 189A - Dynamic Programming approach
 *
 * Polycarpus has a ribbon, its length is n. He wants to cut the ribbon in a way that fulfils the following two conditions:

After the cutting each ribbon piece should have length a, b or c.
After the cutting the number of ribbon pieces should be maximum.
Help Polycarpus and find the number of ribbon pieces after the required cutting.

*/


#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int dp[n+1];
    fill(dp, dp+n+1, 0);
    int x,y,z;
    for(int i=1;i<=n;i++){
        x=INT_MIN,y=INT_MIN,z=INT_MIN;
        if(i>=a)
            x=dp[i-a];
        if(i>=b)
            y=dp[i-b];
        if(i>=c)
            z=dp[i-c];
    
        

        dp[i] = 1+max(x,max(y,z));
    }

    cout<<dp[n]<<endl;

    return 0;
}
