#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
int level[N];
int c = 0;

int dfs (int u, int p=-1)
{
    
    visited[u] = true;
    for(int v: adj[u])
    {
        if(v == p) continue;
        if(visited[v] == true) continue;
        dfs(v, u);
        c++;
    }
    return c;

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
        
    }
    int x;
    cin>>x;

    
    
    cout<<dfs(x);

    return 0;
}