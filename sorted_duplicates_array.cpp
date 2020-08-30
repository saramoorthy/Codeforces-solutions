#include<iostream>
#include<map>
using namespace std;

map<int, int> sorted_duplicates(int A[], int size){
    
    map<int, int> ans;
  
    int count=0;
   
    for(int i=1;i<size;i++){
        
        while(A[i]==A[i-1]){
            count++;
            i++;
        }
        ans[A[i-1]]=count;
        count=0;
            
    }
    return ans;

}





int main(){
    
    
    
    int A[]={2,3,4,4,4,5,6,7,8,8,9};
    int length = sizeof(A)/sizeof(int);
    
    map<int, int> ans=sorted_duplicates(A,length);
    
    for(auto x:ans)
        if(x.second)
            cout<<x.first<<" repeated: "<<x.second+1<<endl;
    
    return 0;
}
