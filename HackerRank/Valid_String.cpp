#include<bits/stdc++.h>
using namespace std;
bool stValid (string s)
{
    stack<char> st;
    for (char v : s)
    {
        if(st.empty())
        {
            st.push(v);
        }
        else if (v == 'A' && st.top() == 'B')
        {
            st.pop();
        }
        else if (v == 'B' && st.top() == 'A')
        {
            st.pop();
        }
        else
        {
            st.push(v);
        }
    }
    return st.empty();
}
int main()
{

    int n;
    cin>>n;
    
    while (n--)
    {
        string s;
        cin>>s;
        if(stValid(s) == true)
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