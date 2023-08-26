#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+6;
const int NFT = 1e6+9;
vector<int> g[N];
vector<bool> visited(N, false);
vector<int> parent(N, NFT);
vector<int> level(N);

void dfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    parent[source] = -1;
    level[source] = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v: g[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            parent[v] = u;
            level[v] = level[u] + 1;
        }
    }
    
}

int main()
{
    int n, m;
    cin>> n >> m;

    for (int i=0; i<m; i++)
    {
        int a, b;
        cin>> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1);

    if(visited[n])
    {
        cout<< level[n] << endl;

        int carr = n;
        vector<int> path;
        while (carr != -1)
        {
            path.push_back(carr);
            carr = parent[carr];
        }

        reverse(path.begin(), path.end());

        for(int v: path)
        {
            cout<< v << " ";
        }
    }

    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    


    return 0;
}