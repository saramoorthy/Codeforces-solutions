//500A
//
//http://codeforces.com/problemset/problem/500/A


#include <iostream>
#include <algorithm>



using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    arr[0]=0;
    int i=1;
    
    for(int i=1;i<n;i++)
        cin>>arr[i];
    while(i<n){
        i=i+arr[i];
        
        //cout<<i<<" "<<arr[i]<<endl;
        if(i>t){
            cout<<"NO";
            return 0;
            
        }
       
        if(i==t){
            cout<<"YES";
            return 0;}
        
        
    }
    return 0;
}
