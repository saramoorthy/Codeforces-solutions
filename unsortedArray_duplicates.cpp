#include<iostream>
#include<map>

using namespace std;

map<int,int> unsorted_duplicates(int A[], int size){
    
    map<int, int> ans;
    
    for(int i=0;i<size;i++){
        if(A[i]!=-1){
            int count=1;
            for(int j=i+1;j<size;j++){
                if(A[i]==A[j]){
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1)
                ans[A[i]]=count;
        }
    }
    
    
    return ans;
}

map<int,int> unsorted_duplicates2(int A[], int size){
    
    map<int, int> ans;
    
    int max=A[0];
    for(int i=1;i<size;i++){
        if(A[i]>max)
            max=A[i];
    }
    
    int H[max];
    for(int i=0;i<max;i++)
        H[i]=0;
    
    for(int i=0;i<size;i++)
        H[A[i]]++;
    
    
    for(int i=0;i<max;i++){
        if(H[i]>1)
            ans[i]=H[i];
    }
    
    
    return ans;
}



int main(){
    
    int A[]={3,4,2,5,6,3,5,9,5,5};
    int length = sizeof(A)/sizeof(int);
    map<int, int> ans=unsorted_duplicates2(A,length);
    
    
    for(auto x:ans){
        cout<<x.first<<" repeated: "<<x.second<<endl;
        
    }
    
    return 0;
}
