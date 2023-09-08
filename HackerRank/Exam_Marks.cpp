#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 10050;
int dp[N][N];
bool Subset(int n, int s, int a[])
{
    if(n == 0)
    {
        if(s == 0) return true;
        else return false;
    }
    if(dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if(a[n-1] <= s)
    {
    int op1 = Subset(n-1, s - a[n-1], a);
    int op2 = Subset(n-1, s, a);
    return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = Subset(n-1, s, a);
    }
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n, mark;
        cin>>n>>mark;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(1000 > mark)
        {
            int s = 1000 - mark;
            for(int i=0; i<=n; i++)
            {
                for(int j=0; j<=s; j++)
                {
                    dp[i][j] = -1;
                }
            }
            bool ans = Subset(n, s, a);
            if(ans)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}