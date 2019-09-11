//122A - Lucky Division
//
//https://codeforces.com/problemset/problem/122/A
//
//
//Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
//
//Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.
//
//Input
//The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.
//
//Output
//In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

#include <iostream>

using namespace std;

int main() {
    int n;
    int x;
    cin>>n;
    string str;
    for(int i=1;i<=n;i++){
        x=i;
        while(x>0){
            if((x%10==4)||(x%10==7)){
                x=x/10;
            }
            else
                break;
        }
        if(x<1){
            if(n%i == 0){
                str="YES";
            }
            
        }
        
        if(str=="YES"){
            cout<<str<<endl;
            break;
        }
        if(i>=n)
            cout<<"NO"<<endl;
    }
    
    
    return 0;
}
