#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> lucky;
    int flag=0;

    for(int i=1;i<=n;i++){
        int j = i;
        while(j>0){
            if(j%10 == 4 || j%10 == 7){
                j=j/10;
                
            }else
                break;
        }
        if(j==0)
            lucky.push_back(i);
    }
  
    for( int x: lucky){
        if(n%x == 0){
            flag = 1;
            break;
    }
    }
    
   if(flag)
       cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
    return 0;
}
