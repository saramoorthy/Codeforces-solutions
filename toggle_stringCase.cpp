#include<iostream>
using namespace std;

char * invertString(char A[]){
    
   
    
    for(int i=0;i<A[i]!='\0';i++){
        
        if(isupper(A[i]))
            A[i]=A[i]+32;
        
        else if(islower(A[i]))
            A[i]=A[i]-32;
        
    }
    
    
    return A;
}

int main(){
    
    char str[]="Saraswathi";
    cout<<invertString(str)<<endl;
    
    return 0;
}
