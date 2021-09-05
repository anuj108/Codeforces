#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ch;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        if (ch == '.')
            cout << 0;
        else if (ch == '-')
        {
            if (s[i + 1] == '.')
                {cout << 1;
                i++;}
            else
                {cout << 2;
                i++;}
        }
    }
    return 0;
}