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
void dfs(int si, int sj)
{
    visit[si][sj] = true;

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

    int i, j;
    cin >> i >> j;
    int di, dj;
    cin >> di >> dj;

    dfs(i, j);
    if (visit[di][dj])
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}