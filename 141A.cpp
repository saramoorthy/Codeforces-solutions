/*
 

141A

 So, the New Year holidays are over. Santa Claus and his colleagues can take a rest and have guests at last. When two "New Year and Christmas Men" meet, thear assistants cut out of cardboard the letters from the guest's name and the host's name in honor of this event. Then the hung the letters above the main entrance. One night, when everyone went to bed, someone took all the letters of our characters' names. Then he may have shuffled the letters and put them in one pile in front of the door.

The next morning it was impossible to find the culprit who had made the disorder. But everybody wondered whether it is possible to restore the names of the host and his guests from the letters lying at the door? That is, we need to verify that there are no extra letters, and that nobody will need to cut more letters.

Help the "New Year and Christmas Men" and their friends to cope with this problem. You are given both inscriptions that hung over the front door the previous night, and a pile of letters that were found at the front door next morning.
*/

#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

string check(){
    string guest, host, mix;
    unordered_map<char, int> u_map1;
    unordered_map<char, int> u_map2;
    cin>>guest;
    cin>>host;
    cin>>mix;
    string result = guest+host;

    if((guest.size()+host.size())==mix.size()){
        for(int i=0; i<mix.size(); i++){
            if(u_map1.count(mix[i])){
                u_map1[mix[i]] = u_map1[mix[i]]+1;
            }else{
                u_map1[mix[i]] = 1;
            }
        }
        for(int i=0; i<result.size();i++){
            if(u_map2.count(result[i])){
                u_map2[result[i]] = u_map2[result[i]]+1;

            }else{
                u_map2[result[i]] =1;
            }
        }

    }else{
        return "NO";
    }
    
    for(auto x: u_map1){
        if(u_map2[x.first] == x.second)
            continue;
        else
            return "NO";
    }


    return "YES";
}

int main(){

    string ans = check();
    cout<<ans<<endl;
    return 0;
}
