#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
int dp[100010];
int MakeIt(int n)
{
    if(n == 1)
    {
        return true;
    }
    if(n < 1)
    {
        return false;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    if(n % 2 == 0)
    {
        int op1 = MakeIt(n - 3);
        int op2 = MakeIt(n / 2);
        return dp[n] = op1 || op2;
    }
    else
    {
        return dp[n] =  MakeIt(n - 3);
    }
    
}
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<=n; i++)
        {
            dp[i] = -1;
        }
        bool ans = MakeIt(n);
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}