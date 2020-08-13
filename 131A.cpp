#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    int count=0;
    int flag=0;
    cin>>str;
    int len = str.length();
    
    for(int i=0; i<len; i++){

            if(isupper(str[i]))
                count++;
   
        
    }
    
    if( (count==len) || (islower(str[0]) && count == len-1)) {
        
        for(int i=0; i<len; i++){
            if(isupper(str[i]))
                str[i]=tolower(str[i]);
            else
                str[i]=toupper(str[i]);
        }
        
    }
    
    cout<<str<<endl;
    return 0;
    
}
