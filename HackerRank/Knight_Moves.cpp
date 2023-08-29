#include<bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N = 1000;
bool vis[N][N];
int dis[N][N];
int g[N][N];
int n, m, ki, kj, qi, qj;
vector<pi> path = {{-2, 1}, {-2, -1}, {2, -1}, {2, 1}, {-1, 2}, {1, 2}, {-1, -2}, {1, -2}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}

void bfs(int ki, int kj)
{
    queue<pi> q;
    q.push({ki, kj});
    dis[ki][kj] = 0;
    vis[ki][kj] = true;

    while (!q.empty())
    {
        pi qval = q.front();
        int ci = qval.first;
        int cj = qval.second;
        q.pop();
        for(int i=0; i<8; i++)
        {
            pi p = path[i];
            int bi = ci + p.first;
            int bj = cj + p.second;
            if((!vis[bi][bj]) && isValid(bi, bj))
            {
                vis[bi][bj] = true;
                q.push({bi, bj});
                dis[bi][bj] = dis[ci][cj] + 1;
            }
        }
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>> n >> m >> ki >> kj >> qi >> qj;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                dis[i][j] = -1;
                vis[i][j] = false;
            }
        }

        bfs(ki, kj);
        if(vis[qi][qj])
        {
            cout << dis[qi][qj] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
    }
    
    return 0;
}