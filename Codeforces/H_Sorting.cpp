#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int ar[n];
    
    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int y = 1;
    for (int i=0; i<n-1; i++)
    {
        for (int j = y; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                swap(ar[i], ar[j]);
            }
        }
        y++;
    }

    for (int i=0; i<n; i++)
    {
        cout<< ar[i] << " ";
    }
    return 0;
}