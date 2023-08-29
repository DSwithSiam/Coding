#include<bits/stdc++.h>
using namespace std;

const int N = 100010;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main()
{

    int n;
    cin>>n;
    while (n--)
    {
        int a, b;
        cin>> a >> b;
        pq.push({a, b});
    }

    while (!pq.empty())
    {
        pair<int, int> v = pq.top();
        pq.pop();
        cout<<v.first << " " << v.second << endl;
    }
    
    return 0;
}