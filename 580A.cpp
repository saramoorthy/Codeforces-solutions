#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int count=0;
    int nums[n];
    int max=0;
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums[i]=num;
    }
    
    for(int j=0; j<n-1; j++){
        if(nums[j]<=nums[j+1]){
            count++;
            if(count>max)
                max=count;
        }
        else{
            count=0;
            
        }
        
    }
    cout<<max+1<<endl;
    return 0;
}
