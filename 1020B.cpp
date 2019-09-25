//https://codeforces.com/problemset/problem/1020/B
//1020B


#include<bits/stdc++.h>

using namespace std;
vector <vector <int>> graph(1100);
int n,x;
bool done;

bool visited[1100];

void dfs(int node){
    if(done)
        return;
    visited[node] = true;
    for (int s:graph[node]) {
        if (!visited[s]) {
            dfs(s);
        }
        else{
            cout<<s<<endl;
            done=true;
            return;
        }
    }
    
}





int main(){
    
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cin>>x;
        graph[i].push_back(x);
       
    }
    
    
    for(int i=1;i<=n;i++)
    {
        done=false;
        memset(visited,0,sizeof(visited));
        dfs(i);
    }
    
    return 0;
}
