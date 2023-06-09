#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin>>n;

    int a = 1, b = n;
    for(int x=1; x<=n; x++)
    {
        if (x == (n/2)+1)
        {
            for(int i=1; i<=n; i++)
            {
                if (i != (n/2)+1) cout<<" ";
                else cout<<"X"; 
            }
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
            if (i != a && i !=b) cout<<" ";
            if (a == i) cout<<"\\";
            if (b == i) cout<<"/";
            }
        }
        
        cout<<endl;
        a++;
        b--;
       
    }
    
    return 0;
}