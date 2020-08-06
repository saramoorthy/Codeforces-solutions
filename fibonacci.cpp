#include<iostream>
#include<stdio.h>

using namespace std;

int F[10];
int fibonacci(int n){

    if(n<=1){
        F[n]=n;
        return fibonacci(n-2)+fibonacci(n-1);
    }
    else{
        if(F[n-2]==-1)
            F[n-2]=fibonacci(n-2);

        if(F[n-1]==-1)
            F[n-1]=fibonacci(n-1);
        
        F[n]= F[n-1]+F[n-2];
        return F[n-1]+F[n-2];
    }

}

int main(){

    for(int i=0; i<10;i++)
        F[i]=-1;


    cout<<fibonacci(5)<<endl;
    return 0;
}
