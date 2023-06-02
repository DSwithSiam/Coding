#include<bits/stdc++.h>
using namespace std;

int main()
{

    char a;
    cin >> a;
    if (isdigit(a))
    {
        cout << "IS DIGIT";
    }
    else if (isalpha(a))
    {
        cout<<"ALPHA"<<endl;
        isupper(a) ? cout<<"IS CAPITAL"<<endl : cout << "IS SMALL";
    }
    return 0;
}