#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int, int> gift;
    for(int i=1;i<n+1;i++){
        int person;
        cin>>person;
        gift[i]=person;
        
    }
    int k=1;
    for(int x=0;x<n;x++){
        
    for(auto &j : gift){
        int key=0;
        if(j.second == k){
            key = j.first;
            cout<<key<<" ";
        }
    }
        k++;
    }
    cout<<endl;
    return 0;
}
