#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];
int level[N];

int bfs (int a)
{
    int x = 0;
    queue<int> q;
    q.push(a);
    visited[a] = true;
    level[a] = 0;

    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        x++;
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
    return x;
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
    vector<int> vt;
    for(int i=0; i<N; i++)
    {
        if(visited[i] == false)
        {
            int d= bfs(i);
            if(d > 1)
            {
                vt.push_back(d);
            }
        }
    }
    sort (vt.begin(), vt.end());
    for(int v:vt)
    {
        cout<<v<<" ";
    }



    return 0;
}