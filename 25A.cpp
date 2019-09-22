//
//25A
//
//http://codeforces.com/problemset/problem/25/A
//
//Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.
//
//Input
//The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.
//
//Output
//Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.


#include<iostream>

using namespace std;
int main(){
    int n;
    int odd=0, even=0;
    int lastodd, lasteven;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            odd++;
            lastodd=i;
        }
        else{
            even++;
            lasteven=i;
        }
        
    }
    
    if(even==1)
        cout<<lasteven+1<<endl;
    if(odd==1)
        cout<<lastodd+1<<endl;
    return 0;
}
