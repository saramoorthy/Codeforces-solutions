//Stones on the Table
//https://codeforces.com/problemset/problem/266/A
//
//There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.
//
//Input
//The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.
//
//The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.
//
//Output
//Print a single integer — the answer to the problem.

#include <iostream>
using namespace std;

int main() {
    string str;
    int count=0;
    int n=str.length();
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1])
            count++;
    }
    cout<<count<<endl;
    return 0;
}


