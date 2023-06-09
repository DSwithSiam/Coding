#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin>>n;
    long long int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    string a="NO";
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i] == ar[j])
            {
                a = "YES";
                break;
            }
        }
    }
    cout<<a;
    return 0;
}