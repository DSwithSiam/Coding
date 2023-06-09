#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;cin>>n;
    while(n--)
    {
        int a; cin>>a;
        vector <int> v(a);
        for(int i=0; i<a; i++)
        {
            cin>>v[i];
        }
        vector<int> v2=v;
        sort(v2.begin(), v2.end());

        if (v == v2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}