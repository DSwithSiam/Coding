#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, n2;
    cin>>n>>n2;
    stack<int> st;
    queue<int> qu;
    bool flg = true;

    while (n--)
    {
        int v;
        cin>>v;
        st.push(v);
        
    }
    while (n2--)
    {
        int v;
        cin>>v;
        qu.push(v);
    }

    list<int> l;
    list<int> l2;
   while (!st.empty())
    {
        int v = st.top();
        st.pop();
        l.push_back(v);
        
    }
    while (!qu.empty())
    {
        int v = qu.front();
        qu.pop();
        l2.push_back(v);
    }

    if(l.size() != l2.size())
    {
        flg = false;
    }
    else
    {
        while(!l.empty())
        {
            if(l.front() != l2.front())
            {
                flg = false;
            }
            l.pop_front();
            l2.pop_front();
        }
    }
    if(flg) cout<<"YES";
    else cout<<"NO";
    return 0;
}