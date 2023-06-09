#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin>>n;
    for (int  i = 1; i<= n ; i++)
    {
        long long int a, b;
        cin>>a>>b;
        if(a <= b && a !=0)
        {
            cout<<1<<endl;
        }
        else if(b == 0)
        {
            cout<<-1<<endl;
        }
        else if (a%b == 0)
        {
            long long int m = (a/b);
            cout<<m<<endl;
        }
        else
        {
            long long int m = ((a/b)+1);
            cout<<m<<endl;
        }
    }
    return 0;
}