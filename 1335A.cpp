/*

1335A

There are two sisters Alice and Betty. You have 𝑛 candies. You want to distribute these 𝑛 candies between two sisters in such a way that:

Alice will get 𝑎 (𝑎>0) candies;
Betty will get 𝑏 (𝑏>0) candies;
each sister will get some integer number of candies;
Alice will get a greater amount of candies than Betty (i.e. 𝑎>𝑏);
all the candies will be given to one of two sisters (i.e. 𝑎+𝑏=𝑛).
Your task is to calculate the number of ways to distribute exactly 𝑛 candies between sisters in a way described above. Candies are indistinguishable.

Formally, find the number of ways to represent 𝑛 as the sum of 𝑛=𝑎+𝑏, where 𝑎 and 𝑏 are positive integers and 𝑎>𝑏.

You have to answer 𝑡 independent test cases.

*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        double a;
        cin>>a;
        cout<<int(ceil(a/2)-1)<<endl;
        
    }
        
    return 0;
}
