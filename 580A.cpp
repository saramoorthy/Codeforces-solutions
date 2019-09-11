//580A - Kefa and First Steps
//
//https://codeforces.com/problemset/problem/580/A
//
//
//Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.
//
//Help Kefa cope with this task!
//
//Input
//The first line contains integer n (1 ≤ n ≤ 105).
//
//The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).
//
//Output
//Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n,count=1,max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1])
            count++;
        else{
            if(count>max){
                max=count;
                
            }
            count=1;
        }
    }
    if(count>max)
        max=count;
    cout<<max<<endl;
    return 0;
}
