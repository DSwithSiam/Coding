#include<bits/stdc++.h>
using namespace std;


int main()

{
    
    string x = "Ratul", a;
    bool flag = false;
    while (cin>>a)
    {
        if (a == x) flag = true;
    }
    
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}