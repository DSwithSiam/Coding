#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
bool abc_is_valid(string st)
{
    if(st == "abc")
    {
        return true;
    }
    else
    {
        string s = st;
        char x = s[0];
        s[0] = s[1];
        s[1] = x;

        if(s == "abc")
        {
            return true;
        }

        s = st;
        char y = s[0];
        s[0] = s[2];
        s[2] = y;

        if(s == "abc")
        {
            return true;
        }

        s = st;
        char z = s[1];
        s[1] = s[2];
        s[2] = z;

        if(s == "abc")
        {
            return true;
        }

        return false;
        
    }
    

}
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        bool ans = abc_is_valid(s);
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}