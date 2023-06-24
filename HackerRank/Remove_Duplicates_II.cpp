#include<bits/stdc++.h>
using namespace std;
int main()
{

    list<int> head;
    int v;
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        head.push_back(v);
    }
    head.sort();
    head.unique();
    for (int v:head)
    {
        cout<<v<<" ";
    }
    
    
    return 0;
}