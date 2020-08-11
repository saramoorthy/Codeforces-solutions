#include<iostream>
using namespace std;

int main(){
    
    int n;
    string str;
    int countA=0;
    int countD=0;
    cin>>n;
    cin>>str;
    
    for(int i=0; i<n; i++){
        
        if(str[i]=='A')
            countA++;
        if(str[i]=='D')
            countD++;
        
    }
    
    if(countA>countD)
        cout<<"Anton"<<endl;
    else if(countD>countA)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    
    return 0;
}
