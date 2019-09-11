//271A - Beautiful Year
//
//
//https://codeforces.com/problemset/problem/271/A
//
//
//
//It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.
//
//Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.
//
//Input
//The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.
//
//Output
//Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    
    for(int i=n+1;i<INT_MAX;i++){
        bool visited[10]={false};
        int num=i;
        while(num){
            if(visited[num%10])
                break;
            visited[num%10]=true;
            num=num/10;
        }
        
        if(num==0){
            cout<<i<<endl;
            break;
        }
    }
    
    
    return 0;
}
