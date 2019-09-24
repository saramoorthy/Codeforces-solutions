//217A - Ice Skating

//https://codeforces.com/problemset/problem/217/A

#include<bits/stdc++.h>

using namespace std;


struct drift{
    int x;
    int y;
};


int n_drifts;
bool visited[1000]={false};
drift drifts[1000];

void dfs(int node){
    visited[node] = true;
    for (int i = 1; i <= n_drifts; i++) {
        if (!visited[i] && (drifts[node].x == drifts[i].x || drifts[node].y == drifts[i].y)) {
            dfs(i);
        }
    }
    
}

    



int main(){
    cin >> n_drifts;
    
    for (int i = 1; i <= n_drifts; i++) {
        drift d;
        cin >> d.x >> d.y;
        drifts[i] = d;
    }
    
    int answer = 0;
    
    for (int i = 1; i <= n_drifts; i++) {
        if (!visited[i]) {
            dfs(i);
            answer++;
        }
    }
    
    cout << answer - 1 << endl;
    
    
    
    return 0;
}
