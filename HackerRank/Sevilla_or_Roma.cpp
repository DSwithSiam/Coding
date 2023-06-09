#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t; cin>>t;
    while (t--)
    {
        int a = 0, b = 0;
        int n = 10;
        for (int i=0; i<5; i++)
        {
            int temp;
            cin>>temp;
            a = a + temp;
        }
        for (int i=0; i<5; i++)
        {
            int temp;
            cin>>temp;
            b = b + temp;
        }

        if(a>b) cout<<"sevilla"<<endl;
        else if(b>a) cout<<"roma"<<endl;
        else cout<<"draw"<<endl;
       
    }
    
    return 0;
}