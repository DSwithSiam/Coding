#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];


int bfsDistance (int a, int l)
{
    if(a == l) return 0;
    bool visited[N];
    int level[N];

    queue<int> q;
    q.push(a);
    visited[a] = true;
    level[a] = 0;

    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        
        for(int v: adj[s])
        {
            if(!visited[v]) 
            {
            q.push(v);
            visited[v] = true;
            level [v] = level[s] + 1;
            }
        }
    }
    
    if(visited[l] == false) 
        {return -1;}
    return level[l];
}


int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a, b;
        cin>>a>>b;
        cout<<bfsDistance(a, b)<<endl;
    }
}