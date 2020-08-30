#include<iostream>
#include<map>
using namespace std;

map<int,int> pairSum_unsorted(int A[],int size, int k){
    
    map<int, int> ans;
    
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(A[j] == k-A[i]){
                ans[A[i]]=A[j];
            }
        }
    }
    
    return ans;
}



map<int,int> pairSum_unsorted2(int A[],int size, int k){
    
    map<int, int> ans;
    int max=A[0];
    for(int i=1;i<size;i++)
        if(A[i]>max)
            max=A[i];
    
    int H[max];
    
    for(int i=0;i<max;i++)
        H[i]=0;
    
    for(int i=0;i<size;i++)
        H[A[i]]++;
    
    
    for(int i=0;i<size;i++){
        
        if(H[k-A[i]]==1)
            if(A[i]!=k-A[i])
                ans[A[i]]=k-A[i];
            H[A[i]]=-1;
        
    }
    
    
    return ans;
}


int main(){
    
    int A[]={6,3,8,10,16,7,5,2,9,14};
    int k=10;
    int len = sizeof(A)/sizeof(int);
    map<int,int> ans;
    ans=pairSum_unsorted2(A,len,k);
    
    for(auto x:ans)
        cout<<x.first<<"+"<<x.second<<"="<<k<<endl;
    
    
    
    return 0;
}
