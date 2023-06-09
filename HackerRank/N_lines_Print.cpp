#include<bits/stdc++.h>
using namespace std;

int main()
{

    int c = 1, x = 1, n; cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for(int i = 1; i <= c; i++)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
        c++;
    }
    return 0;
}