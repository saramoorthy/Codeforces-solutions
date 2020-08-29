#include<iostream>
using namespace std;


int * sorted_union(int A[], int B[], int s1, int s2){
    static int C[]={0};
    int i=0;
    int j=0;
    int k=0;
    while(i<s1 && j<s2){
        
            if(A[i]<B[j]){
                C[k++]=A[i];
                i++;
            }
            else if(A[i]==B[j]){
                C[k++]=A[i];
                i++;
                j++;
            
            }
            else if(A[i]>B[j]){
                C[k++]=B[j];
                j++;
            }
        
    }
    
    for(;i<s1;i++){
        C[k++]=A[i];
    }
    
    for(;j<s2;j++){
        C[k++]=B[j];
    }
    
    return C;
}


int * sorted_intersection(int A[], int B[], int s1, int s2){
    static int C[]={0};
    int i=0;
    int j=0;
    int k=0;
    while(i<s1 && j<s2){
        if(A[i]==B[j]){
            C[k++]=A[i];
            i++;
            j++;
        }else if(A[i]<B[j])
            i++;
        else
            j++;
    }
    
    return C;
    
}


int * sorted_difference(int A[], int B[], int s1, int s2){
    
    static int C[]={0};
    int i=0;
    int j=0;
    int k=0;
    
//    int A[5]={2,6,10,15,25};
//    int B[5]={3,6,7,15,20};
    
    while(i<s1 && j<s2){
        if(A[i]==B[j]){
            i++;
            j++;
            
        }else if(A[i]<B[j]){
            C[k++]=A[i];
            i++;
        }else{
            j++;
        }
    }
    
    for(;i<s1;i++)
        C[k++]=A[i];
    
    return C;
    
    
}


int sorted_set_membership(int A[], int s1, int x){
    
    int low=0;
    int high = s1-1;
    int mid = (high +low)/2;
    
    while(low<=high){
        mid = (high +low)/2;
        if(A[mid]==x)
            return mid;
        else if(x<A[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    
    return -1;
    
    
}


int * unsorted_union(int A[], int B[], int s1, int s2){
    
    static int C[]={0};
    int k=0;
    int j=0;
    for(int i=0; i<s1;i++){
        C[k++]=A[i];
    }
    
    
    while(j<s2){
        for(int p=0;p<s1;p++){
            int flag=0;
            if(B[j]==A[p]){
                j++;
                flag=1;
            }
                if(!flag)
                    C[k++]=B[j++];
        }
    }
    
    return C;
    
    
}


int * unsorted_intersection(int A[], int B[], int s1, int s2){
    
    int k=0;
    static int C[]={0};
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(A[i]==B[j])
                C[k++]=A[i];
        }
    }
    return C;
}


int * unsorted_difference(int A[], int B[], int s1, int s2){
    int k=0;
    static int C[]={0};
    

    for(int i=0;i<s1;i++){
        int flag=0;
        for(int j=0;j<s2;j++){
            if(A[i]==B[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
            C[k++]=A[i];
    }
    
    return C;
    
    
    
}


int unsorted_set_membership(int A[], int s1, int x){
    
    for(int i=0;i<s1;i++){
     
        if(A[i]==x)
            return i;
    }
    
    return -1;
    
}

int main(){
    
    
    int A[5]={2,6,10,15,25};
    int B[5]={3,6,7,15,20};
    
    int *p= unsorted_union(A,B,5,5);


    for(int i=0;i<10 && p[i]!=0;i++){
        cout<<p[i]<<",";

    }
    
    
    int ans=sorted_set_membership(A,5,10);
    
    cout<<ans<<endl;
    
    return 0;
}
