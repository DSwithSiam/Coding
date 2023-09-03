
#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 1e5+5;
int dp[N];
int main()
{

    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        int v;
        cin>>v;
        dp[i] = -1;
        a[i] = v;
    }
    dp[1] = 0;
    dp[2] = abs(a[1] - a[2]); 
    for(int i=3; i<=n; i++)
    {

        dp[i] = min(dp[i-1] + abs(a[i] - a[i-1]), 
        dp[i-2] + abs(a[i] - a[i-2]));
    }

    cout<<dp[n];
    return 0;
}