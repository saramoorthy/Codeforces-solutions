
/*
 Anton's favourite geometric figures are regular polyhedrons. Note that there are five kinds of regular polyhedrons:

Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.

Anton has a collection of n polyhedrons. One day he decided to know, how many faces his polyhedrons have in total. Help Anton and find this number!
*/


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string, int> u_map;
    u_map["Tetrahedron"]=4;
    u_map["Cube"]=6;
    u_map["Octahedron"]=8;
    u_map["Dodecahedron"]=12;
    u_map["Icosahedron"]=20;
    
    int n;
    int count = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        count = count+u_map[str];
    }  
    
    cout<<count<<endl;

    return 0;
}
