#include<iostream>
using namespace std;

int main(){
    
    string str1, str2;
    cin>>str1>>str2;
    int len = str1.length();
    int i=0;
    int flag=0;
    int j= len-1;
    while(i<len && j>=0){
        
        if(str1[i]==str2[j]){
            i++;
            j--;
        }else{
            flag=1;
            break;}
    }
    if(flag)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    
    return 0;
}
