#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int cls;
        char section;
        int id;
        int mathMark;
        int engMark;
};

bool comp(Student a, Student b)
{
    if((a.mathMark + a.engMark ) != (b.mathMark + b.engMark))
    {
        return (a.mathMark + a.engMark) > (b.mathMark + b.engMark);
    }
    else 
    {
        return a.id < b.id;
        
    }
}
int main()
{
    int n;cin>>n;
    Student database[n];
    for (int i=0; i<n; i++)
    {
        cin>>database[i].name>>database[i].cls>>database[i].section>>database[i].id>>database[i].mathMark>>database[i].engMark;

    }
    // sorting koreci akhane
    sort(database, database+n, comp);

    for(int i=0; i<n; i++)
    {
        cout<<database[i].name<<" "<<database[i].cls<<" "<<database[i].section<<" "<<database[i].id<<" "<<database[i].mathMark<<" "<<database[i].engMark<<endl;

    }
    return 0;
}