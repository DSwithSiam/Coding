#include<bits/stdc++.h>
using namespace std;


int main()

{
        int n; cin>>n;
        
        for (int i=0; i<n; i++)
        {
        int index = 0;
        string a, x;
        cin>>a>>x;
        while ((index = a.find(x)) != -1)
        {
                a.replace(index, x.length(), "$");
        }
        cout<<a<<endl;
        }
        return 0;
}