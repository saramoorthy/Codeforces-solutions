/*
 * 996A
 * Allen has a LOT of money. He has 𝑛 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number of bills Allen could receive after withdrawing his entire balance?
 */

#include<iostream>
using namespace std;

int main(){

    int bills[] = {100,20,10,5,1};
    int n;
    int count = 0;
    cin>>n;

    while(n>0){
        for(int i=0; i<5; i++){
            count = count + (n/bills[i]);
            n = n % bills[i];
        }
    }
    cout<<count<<endl;
    return 0;
}

