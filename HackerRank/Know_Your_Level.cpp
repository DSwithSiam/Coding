#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
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

    bfs(0);
    bool flg = true;
    for(int i=0; i<n; i++)
    {
        if(x == 0)
        {
            cout<<0;
            flg = false;
            break;
        }
        if(x == level[i])
        {
            if(visited[i])
            {
                cout<<i<<" ";
                flg = false;
            }
            
        }
    }
    if(flg)
    {
        cout<<-1<<" ";
    }

    return 0;
}