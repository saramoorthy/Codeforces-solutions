#include <bits/stdc++.h>
using namespace std;

int n, m, pr[100001];
long long dist[100001];
vector<pair<int, int> > g[100001];
priority_queue<pair<int, long long > >pq;

void trace(int v) {
    if(pr[v]) trace(pr[v]);
    cout<<v;
}

int main() {
    cin>>n>>m;
    fill_n(dist+1, n, LLONG_MAX);
    for(int i = 0,u,v,w; i < m; i++){
        cin>>u>>v>>w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
        
    }
    pq.push({dist[1]=0, 1});
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for(auto p: g[u]) if(dist[u] + p.second < dist[p.first]) {
            dist[p.first] = dist[u] + p.second;
            pr[p.first] = u;
            pq.push({-dist[p.first], p.first});
        }
    }
    if(dist[n] == LLONG_MAX) printf("-1");
    else trace(n);
}

