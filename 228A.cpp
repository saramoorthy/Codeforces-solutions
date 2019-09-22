//228A
//
//http://codeforces.com/problemset/problem/228/A

#include <iostream>
#include <set>

using namespace std;
int main(){
    int i;int a;
    set<int> c;
    for(i=0;i<4;i++){
        cin>>a;
        c.insert(a);
        
    }
    cout<<4-(c.size())<<endl;
    
    
    return 0;
}

