#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char section;
        int mark;
};

int main()
{
    int n; cin >> n;

    Student obj[n];
    for (int i=0; i<n; i++)
    {
        cin>>obj[i].name>>obj[i].cls>>obj[i].section>>obj[i].mark;

    }
    int j = n-1;
    for(int i=0; i<n; i++){
        cout<<obj[i].name<<" "<<obj[i].cls<<" "<<obj[i].section<<" "<<obj[j].mark<<endl;
        j--;
    }
    return 0;
}