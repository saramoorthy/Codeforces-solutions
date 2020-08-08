#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int lower=0;
    int upper=0;
   
    cin>>str;
    
    for(char &c:str){
        
        if(isupper(c))
            upper++;
        else
            lower++;
    }
    
    if(upper<=lower){
        for(char &x:str)
            x=tolower(x);
        
    }
    else
    {
        for(char &y:str)
            y=toupper(y);
    }
    cout<<str<<endl;
    

    return 0;
}
