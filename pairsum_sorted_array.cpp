#include<iostream>
#include<map>
using namespace std;


map<int,int> pairsum_sorted(int A[], int size, int k){
    
    map<int, int> ans;
    
    int i=0;
    int j=size-1;
    // 1,3,4,5,6,8,9,10,12,14
    while(i<j){
        if(A[i]+A[j] == k){
            ans[A[i]]=A[j];
            i++;j--;
        }else if(A[i]+A[j] > k){
            j--;
            
        }else{
            i++;
        }
        
    }
     
    return ans;
}


int main(){
    
    
    int A[]={1,3,4,5,6,8,9,10,12,14};
    int len = sizeof(A)/sizeof(int);
    int k=10;
    map<int,int> ans = pairsum_sorted(A, len, k);
    
    
    for(auto x: ans)
        cout<<x.first<<"+"<<x.second<<"="<<k<<endl;
    
    return 0;
}
