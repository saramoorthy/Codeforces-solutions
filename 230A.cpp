/*
 * 230A
 * Kirito is stuck on a level of the MMORPG he is playing now. To move on in the game, he's got to defeat all n dragons that live on this level. Kirito and the dragons have strength, which is represented by an integer. In the duel between two opponents the duel's outcome is determined by their strength. Initially, Kirito's strength equals s.

If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's strength xi, then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon and gets a bonus strength increase by yi.

Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is, defeat all dragons without a single loss.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<pair<int,int>> v;
string game(){

    int s,n;
    cin>>s>>n;

    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    
    for(auto x:v){
        if(s<=x.first)
            return "NO";
        else
            s=s+x.second;
    }

    return "YES";

}

int main(){
    string ans = game();
    cout<<ans<<endl;
    return 0;
}
