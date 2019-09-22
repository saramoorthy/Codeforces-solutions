//
//705A - Hulk
//
//http://codeforces.com/problemset/problem/705/A
//
//Dr. Bruce Banner hates his enemies (like others don't). As we all know, he can barely talk when he turns into the incredible Hulk. That's why he asked you to help him to express his feelings.
//
//                                    Hulk likes the Inception so much, and like that his feelings are complicated. They have n layers. The first layer is hate, second one is love, third one is hate and so on...
//
//                                    For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.
//
//                                    Please help Dr. Banner.
//
//                                    Input
//                                    The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.
//
//                                    Output
//                                    Print Dr.Banner's feeling in one line.





#include <iostream>

using namespace std;

int main()
{
    int n;
    string str1 = "I hate it";
    string str2 = "I love it";
    string st1 = "I hate that ";
    string st2 = "I love that ";
    string ans="";
    cin>>n;
    if(n%2 == 1){
        for(int i=1;i<=n;i++){
                if(i<n){
                    if(i%2 ==1)
                        ans = ans + st1;
                    if(i%2 ==0)
                        ans = ans + st2;
                }
                if(i==n)
                    ans = ans+str1;
            
        }
        
    }
    if(n%2 == 0){
        for(int i=1;i<=n;i++){
            if(i<n){
                if(i%2 ==1)
                    ans = ans + st1;
                if(i%2 ==0)
                    ans = ans + st2;
            }
            if(i==n)
                ans = ans+str2;
            
        }
        
    }
    cout<< ans <<endl;
    return 0;
}

