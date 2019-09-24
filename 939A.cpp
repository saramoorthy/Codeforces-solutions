
//939A
//https://codeforces.com/problemset/problem/939/A


//As you could know there are no male planes nor female planes. However, each plane on Earth likes some other plane. There are n planes on Earth, numbered from 1 to n, and the plane with number i likes the plane with number fi, where 1 ≤ fi ≤ n and fi ≠ i.
//
//We call a love triangle a situation in which plane A likes plane B, plane B likes plane C and plane C likes plane A. Find out if there is any love triangle on Earth.
//Input
//
//The first line contains a single integer n (2 ≤ n ≤ 5000) — the number of planes.
//
//The second line contains n integers f1, f2, ..., fn (1 ≤ fi ≤ n, fi ≠ i), meaning that the i-th plane likes the fi-th.
//Output
//
//Output «YES» if there is a love triangle consisting of planes on Earth. Otherwise, output «NO».
//
//You can output any letter in lower case or in upper case.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[5001];
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        --a[i];
    }
    
    for(int i = 0; i < n; ++i) {
        if(a[i] == a[a[a[a[i]]]]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
}


