#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int flag=0;
    
    for(int i=0; i<str.length();i++){
        
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
        else
            continue;
    }
    if(!flag)
        cout<<"NO"<<endl;
    
    return 0;
}
