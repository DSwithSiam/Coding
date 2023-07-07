#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    queue<string> qu;
    while (n--)
    {
        int t;
        cin>>t;
        if(t == 0)
        {
            string s;
            cin>>s;
            qu.push(s);
        }
        else
        {
            if (qu.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<qu.front()<<endl;
                qu.pop();
            }
        }



    
    }
    
    return 0;
}