#include<iostream>
using namespace std;
int main(){
    
    int n;
    int groups=0;
    cin>>n;
    string first;
    cin>>first;
    char prev=first[1];
    for(int i=1; i<n; i++){
    
        string str;
        cin>>str;
        
        if(str[0]==prev)
            groups++;
        
        prev=str[1];
        
        
    }
    
    cout<<groups+1<<endl;
    
    
    return 0;
}
