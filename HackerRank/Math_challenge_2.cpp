#include<bits/stdc++.h>
using namespace std;

long long cw(int n){
    vector<long long> dp (n+1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<=n; i++)
    {
        dp[i] = dp[i-1]+dp[i-2];
        dp[i]%= 18363111903;
    }
    return dp[n];
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int x; cin>>x;
        long long int c = cw(x);
        cout<<c<<endl;
    }
    return 0;
}