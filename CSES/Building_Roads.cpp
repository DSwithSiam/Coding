#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+9;
vector<int> visited(N, false);
vector<int> g[N];

void dfs (int u)
{
    visited[u] = true;

    for(int v : g[u])
    {
        if (visited[v]) continue;
        dfs(v);
    }
}


int main()
{
    int n, m;
    cin>> n >> m;

    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    vector<int> s;

    for(int i=1; i<=n; i++)
    {
        if(visited[i]) continue;
        s.push_back(i);
        dfs(i);
    }

    cout<<s.size()-1 << endl;
    for(int i=1; i < s.size(); i++)
    {
        cout<< s[i-1] << " " << s[i] << endl;
    }
    return 0;
}