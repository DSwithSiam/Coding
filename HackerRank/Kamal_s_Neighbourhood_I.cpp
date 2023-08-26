#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs (int a)
{
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
    int x;
    cin>>x;

    bfs(1);
    int c = 0;
    for(int v: adj[x])
    {
        c++;
    }
    cout<<c;

    return 0;
}