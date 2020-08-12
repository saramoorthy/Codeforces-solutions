#include<iostream>
using namespace std;

int main(){
    
    int n;
    int p,q;
    p=q=0;
    int count=0;
    cin>>n;
    
    
    for(int i=0; i<n; i++){
        
        cin>>p>>q;
        if(q-p<2)
            continue;
        else
            count++;
        
    }
    
    cout<<count<<endl;
    return 0;
    
}
