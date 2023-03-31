#include <iostream>
using namespace std;

bool isball(char ch)
{
    if(ch == 'O') return false;
    int a = ch - '0';
    return (a >= 0 && a <= 6);
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string str;
        cin >> str;
        int a = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(isball(str[i]))
            {
                a++;
            }
        }
        int b = a / 6;
        int c = a % 6;
        cout << a << " BALLS\n";
        if(b > 0)
        {
            cout << b << " OVER ";
            if(c > 0)
            {
                cout << c << " BALLS";
            }
            cout << endl;
        }
    }
    return 0;
}
