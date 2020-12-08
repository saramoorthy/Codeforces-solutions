
/*
 268A


 Manao works on a sports TV. He's spent much time watching the football games of some country. After a while he began to notice different patterns. For example, each team has two sets of uniforms: home uniform and guest uniform. When a team plays a game at home, the players put on the home uniform. When a team plays as a guest on somebody else's stadium, the players put on the guest uniform. The only exception to that rule is: when the home uniform color of the host team matches the guests' uniform, the host team puts on its guest uniform as well. For each team the color of the home and guest uniform is different.

There are n teams taking part in the national championship. The championship consists of n·(n - 1) games: each team invites each other team to its stadium. At this point Manao wondered: how many times during the championship is a host team going to put on the guest uniform? Note that the order of the games does not affect this number.

You know the colors of the home and guest uniform for each team. For simplicity, the colors are numbered by integers in such a way that no two distinct colors have the same number. Help Manao find the answer to his question.




 */


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    int n;
    int count = 0;
    unordered_map<int, int> u_map;
    cin>>n;
    int b[n];

    for(int i=0; i<n; i++){
        int a=0;
        cin>>a>>b[i];
        if(u_map.count(a)){
            u_map[a] = u_map[a]+1;
        }else{
            u_map[a]=1;
        }
    }
    
    for(auto i=u_map.begin(); i!=u_map.end(); i++){
        for(int j=0; j<n; j++){
            if(i->first==b[j]){
                count = count + (i->second);
            }
        }
    }


    cout<<count<<endl;

    return 0;
}
