//Helpful Maths
//
//
//https://codeforces.com/problemset/problem/339/A
//
//Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.
//
//The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.
//
//You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.
//
//Input
//The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    string str2="";
    vector<int> nums;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++){
        if(str[i]!='+')
        {
            nums.push_back(str[i]-'0');
        }
    }
    sort(nums.begin(),nums.end());
    for(int x:nums){
        str2=str2+'+'+to_string(x);
    }
    str2.erase(0,1);
    cout<<str2<<endl;
    return 0;
}
