//
//  main.cpp
//  codeforces
//
//  Created by Sachu Leonid on 9/22/19.
//  Copyright © 2019 Sachu Leonid. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;
int k;
bool visited[10020];


struct node{
    int p, t;
    node(int a,int b){
        p=a;
        t=b;
    }
};


int bfs(int x, int y){
    queue<node> q;
    q.push(node(x,0));
    
    while(!q.empty()){
        node z= q.front();
        q.pop();
        int xx=z.p;
        int t=z.t;
        if(xx == y)
            return t;
        else{
            if(xx*2==y)return t+1;
            else{ if((xx*2<y+11) && (visited[xx-1]==false))q.push(node(xx*2,t+1));
                
            if(xx-1==y)return t+1;
            else if((xx-1>=0) && (visited[xx-1]==false))q.push(node(xx-1,t+1));
        }
            
        
        }}
    return 0;
}
int main(){
    
    int n,m;
    
    cin>>n>>m;
    
    k=bfs(n,m);
    
    cout<<k<<"\n";

    
    
    return 0;
}
