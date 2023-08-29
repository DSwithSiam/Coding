#include<bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N  = 1010;
bool visit[N][N];
char g[N][N];
int n, m;
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int si, int sj)
{
    if (si>=0 && si<n && sj>=0 && sj<m && g[si][sj] == '.' )
    {
        return true;
    }
    return false;
}
int c = 0;
int dfs(int si, int sj)
{
    visit[si][sj] = true;
    c++;
    for(int i=0; i<4; i++)
    {
        pi p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;
        if (isValid(ci, cj) && !visit[ci][cj])
        {
            
            dfs(ci, cj);
        }
    }
    return c;
}
int main()
{

    
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char x;
            cin >> x;
            g[i][j] = x;
        }
    }

    vector<int> vt;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!visit[i][j] && g[i][j] == '.')
            {
                int cnt = dfs(i, j);
                vt.push_back(cnt);
                c = 0;
            }
        }
    }
    sort(vt.begin(), vt.end());
    if(vt.empty())
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<vt.front();
    }
    
    
    
    return 0;
}