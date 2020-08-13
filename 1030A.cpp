#include<iostream>
using namespace std;

int main(){
    int n;
    int flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
        
        int input;
        cin>>input;
        if(input == 1){
            flag=1;
            break;
        }
    }
    
    if(flag)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    
    return 0;
}
