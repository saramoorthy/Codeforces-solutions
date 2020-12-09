/* 4C
 * A new e-mail service "Berlandesk" is going to be opened in Berland in the near future. The site administration wants to launch their project as soon as possible, that's why they ask you to help. You're suggested to implement the prototype of site registration system. The system should work on the following principle.

Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a new user name, sends it to the user as a prompt and also inserts the prompt into the database. The new name is formed by the following rule. Numbers, starting with 1, are appended one after another to name (name1, name2, ...), among these numbers the least i is found so that namei does not yet exist in the database.
*/


#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>


using namespace std;

int main(){
        
    int n;
    unordered_map<string, int> u_map;
    cin>>n;
    for(int i=0; i<n; i++){

        string ans;
        cin>>ans;

        if(u_map.count(ans)){
            u_map[ans] = u_map[ans]+1;
            ans = ans+to_string(u_map[ans]);
            cout<<ans<<endl;

        }else{
            cout<<"OK"<<endl;
            u_map[ans] = 0;
        }
    }   

    return 0;

}
