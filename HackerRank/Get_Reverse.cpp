#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char section;
        int mathMark;
        int engMark;

};

int main()
{
    int n; cin >> n;

    Student obj[n];
    for (int i=0; i<n; i++)
    {
        cin>>obj[i].name>>obj[i].cls>>obj[i].section>>obj[i].mathMark>>obj[i].engMark;

    }
    for(int i=(n-1); i>=0; i--){
        cout<<obj[i].name<<" "<<obj[i].cls<<" "<<obj[i].section<<" "<<obj[i].mathMark<<" "<<obj[i].engMark<<endl;


    }
    return 0;
}