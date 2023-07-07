#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        list<int> l;
        int si = 0;
        
        void push(int v)
        {
            si++;
            if(l.empty())
            {
                l.push_front(v);
                return;
            }
            l.push_back(v);
        }
        void pop ()
        {
            si--;
            l.pop_back();

        }
        int top ()
        {
            return l.back();
        }
        int size ()
        {
            return si;
        }
        bool empty ()
        {
            return l.empty();
        }
};

class myQueue 
{
    public:
        list<int> l;
        int si = 0;
        
        void push(int v)
        {
            si++;
            if(l.empty())
            {
                l.push_front(v);
                return;
            }
            l.push_back(v);
        }
        void pop ()
        {
            si--;
            l.pop_front();

        }
        int front ()
        {
            return l.front();
        }
        int size ()
        {
            return si;
        }
        bool empty ()
        {
            return l.empty();
        }

};
int main()
{

    int n, n2;
    cin>>n>>n2;
    myStack st;
    myQueue qu;
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