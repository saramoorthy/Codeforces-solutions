#include<iostream>
using namespace std;
int C[]={0};

int * merge(int A[], int B[], int s1, int s2){
    int i=0;
    int j=0;
    int k=0;
    while(i<s1 && j<s2){
    for( k=0;k<s1+s2; k++){
        
        if(A[i]<=B[j])
        {
            C[k]=A[i];
            i++;
        }else{
            C[k]=B[j];
            j++;
        }
        
        
    }
    }
    
    if(i<s1){
        for(int p=i;p<s1;p++)
            C[k++]=A[p];
    }
    if(j<s2){
        for(int q=i;q<s2;q++)
            C[k++]=B[q];
    }
    
    return C;
    
}


int main(){
    
    int A[5]={2,5,8,10,23};
    int B[5]={3,5,6,22,70};
    int * p = merge(A,B,5,5);
    
    for(int s=0;s<10;s++){
        cout<<p[s]<<",";
    }
    
    cout<<endl;
    
    return 0;
}
