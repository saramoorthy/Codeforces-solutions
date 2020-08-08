#include<iostream>
using namespace std;

int main(){
    int n;
    int count =0;
    cin>>n;
    while(n>0){
        
        if(n>=5){
            count += n/5;
            n = n%5;
        }else if(n==4 || n==3 || n==2 || n==1){
            count++;
            n=0;
        }
        
        
    }
    cout<<count<<endl;
    
    return 0;
}
