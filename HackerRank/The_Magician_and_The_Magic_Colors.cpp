#include<bits/stdc++.h>
using namespace std;
string colorMagic (string s)
{
    string str;
    stack<char> st;
    for (char v : s)
    {
        if(st.empty())
        {
            st.push(v);
        }
        else if ((v == 'R' && st.top() == 'B') || (v == 'B' && st.top() == 'R'))
        {
            st.pop();
            if(st.empty())
            {
                st.push('P');
            }
            else
            {
                if(st.top() == 'P') 
                {
                    st.pop();
                }
                else 
                {
                    st.push('P');
                }
            }
        }
        else if ((v == 'R' && st.top() == 'G') || (v == 'G' && st.top() == 'R'))
        {
            st.pop();
            if(st.empty())
            {
                st.push('Y');
            }
            else
            {
                if(st.top() == 'Y') 
                {
                    st.pop();
                }
                else 
                {
                    st.push('Y');
                }
            }
            
        }
        else if ((v == 'B' && st.top() == 'G' )|| (v == 'G' && st.top() == 'B' ))
        {
            st.pop();
            if(st.empty())
            {
                st.push('C');
            }
            else
            {
                if(st.top() == 'C') 
                {
                    st.pop();
                }
                else 
                {
                    st.push('C');
                }
            }
        }
        else if(v == st.top())
        {
            st.pop();
        }

        else
        {
            st.push(v);
        }


    }

    while (!st.empty())
    {
        char s = st.top();
        st.pop();
        str.insert(str.begin(), s);
    }
    
    return str;
}
int main()
{

    int n;
    cin>>n;
    
    while (n--)
    {
        string s;
        int x;
        cin>>x;
        while (x--)
        {
            char c;
            cin>>c;
            s.push_back(c);
        }
        
        cout<<colorMagic(s)<<endl;

    }
    
    return 0;
}