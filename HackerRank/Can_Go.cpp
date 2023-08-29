#include <bits/stdc++.h>
using namespace std;
const long long int N = 1e5 + 5;
vector<pair<long long int,long long int>> v[N];
long long int dis[N];
bool vis[N];
void dijkstra(long long int s)
{
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> pq;

    pq.push({0, s});
    dis[s] = 0;
    while (!pq.empty())
    {
        pair<long long int, long long int> parent = pq.top();
        pq.pop();
        long long int parentNode = parent.second;
        if (vis[parentNode])
        {
            continue;
        }
        vis[parentNode] = true;
        long long int parentCost = parent.first;
        for (long long int i = 0; i < v[parentNode].size(); i++)
        {
            pair<long long int, long long int> child = v[parentNode][i];
            long long int childNode = child.first;
            long long int childCost = child.second;
            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}
int main()
{
    long long int n, e;
    cin >> n >> e;
    while (e--)
    {
        long long int a, b;
        long long int w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        // v[b].push_back({a, w});
    }
    for (long long int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    long long int s, t;
    cin >> s >> t;
    dijkstra(s);

    for (long long int i = 1; i <= t; i++)
    {
        long long int node;
        long long int w;
        cin>>node>>w;

        if(dis[node] <= w)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}