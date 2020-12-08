/*
 492B

 Vanya walks late at night along a straight street of length l, lit by n lanterns. Consider the coordinate system with the beginning of the street corresponding to the point 0, and its end corresponding to the point l. Then the i-th lantern is at the point ai. The lantern lights all points of the street that are at the distance of at most d from it, where d is some positive number, common for all lanterns.

Vanya wonders: what is the minimum light radius d should the lanterns have to light the whole street?
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n,l;
    cin>>n>>l;
    int a[n];
    int max_ele = 0;

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a, a+n);
    int last = l-a[n-1];
    int start = a[0]-0;
    int rez = max(last, start);
    rez = rez*2;

   
    for(int i=0; i<n-1; i++){
        rez = max(rez, (a[i+1]-a[i]));
    }  
    
    
    printf("%.10f\n",rez/2.);
    
    return 0;
}
