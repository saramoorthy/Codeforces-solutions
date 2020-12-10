/* 189A
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
    int ans = 0;
    cin>>n>>a>>b>>c;
    for(int x=0;x<4001; x++){
        for(int y=0;y<4001;y++){
            int zc = n - (a*x + b*y);
            if(zc<0)
                break;
            double z = (zc/(double)c);
            if(z==(int)z)
                ans = max(ans,int(x+y+z));


        }
    }
    cout<<ans;
    
    return 0;
}
