#include<iostream>
using namespace std;

int single_Missing_sortedArray(int A[], int size){
    
    int i;
    for(i=1;i<size; i++){
        if(A[i] != (A[i-1]+1))
            break;
    }
    int ans=A[i]-1;
    return ans;
    
}


int * multiple_Missing_sortedArray(int A[], int size){


    int i;
    static int ans[]={0};
    int k=0;
    int p=0;
    
    for(i=1;i<size; i++){
        int flag=0;
        int count=0;
        if(A[i] != (A[i-1]+1)){
            
            flag=1;
            count=A[i]-A[i-1];
        }
        if(flag){
            for(int m=1;m<count;m++)
                ans[p++]=A[i-1]+m;
        }
            
    }
    ans[p++]='\0';
   
    return ans;


}


void multiple_Missing_unsortedArray(int A[], int size){

    static int ans[]={0};
    int p=0;
    int low = A[0];
    int high = A[0];
    for(int i=0;i<size;i++){
        if(A[i]<low)
            low=A[i];
        else if(A[i]>high)
            high=A[i];
    }
    int H[high];
    for(int i=0;i<=high;i++)
        H[i]=0;
    
    for(int i=0;i<size;i++){
         H[A[i]]++;
    }
       
    
    for(int i=1;i<=high;i++){
        if(H[i]!=1)
            cout<<i<<",";
    }
    cout<<endl;
}

int main(){
    
    int A[5]={2,4,9,10,11};
//    int A[5]={10,11,4,2,9};
    int *p = multiple_Missing_sortedArray(A,5);
    for(int i=0;p[i]!=NULL; i++)
        cout<<p[i]<<",";
    cout<<endl;
    
    multiple_Missing_unsortedArray(A,5);
   
    
    return 0;
}
