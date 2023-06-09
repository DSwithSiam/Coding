#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin>>n;
    vector <long long> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    } 
    for(int i=1; i<n; i++)
    {
        v[i] = v[i] + v[i-1];
    } 
    reverse(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    } 
    return 0;
}