#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxi=0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        maxi = max(temp, maxi);
    }
    cout << maxi;
    return 0;
}