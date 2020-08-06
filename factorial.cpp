#include<iostream>
#include<stdio.h>
using namespace std;


int RFact(int n){

    if(n==0)
        return 1;
    return RFact(n-1)*n;
}

int IFact(int n){

    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans * i;
    }
    return ans;
}

int main(){
    cout<<RFact(5)<<endl;
    cout<<IFact(5)<<endl;
    return 0;
}
