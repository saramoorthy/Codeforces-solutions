//110A - Nearly Lucky Number
//
//https://codeforces.com/problemset/problem/110/A
//
//
//Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
//
//Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.
//
//Input
//The only line contains an integer n (1 ≤ n ≤ 1018).
//
//Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.
//
//Output
//Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

#include <iostream>
#include <string>
using namespace std;

int main() {
    long long int n,count=0,count2=0,digits=0;
    cin>>n;
    while(n>0){
        if((n%10==4)||(n%10==7)){
            count++;
            
        }
        n=n/10;
    }
    int x=count;
    while(count>0){
        if((count%10==4)||(count%10==7)){
            count2++;
            
        }
        digits++;
        count=count/10;
        
    }
    if(count2==digits &&x!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
