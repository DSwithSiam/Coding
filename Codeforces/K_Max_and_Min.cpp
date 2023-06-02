#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a, b , c;
    cin >> a >>b >>c;
    int ma = max(a, b);
    ma = max(ma, c);
    int mi = min(a, b);
    mi = min(mi, c);
    cout << mi <<" "<<ma;
    return 0;
}