#include <iostream>
using namespace std;
int main()
{
    string s, s1;
    cin >> s >> s1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s1[i])
        {
            s1[i] = '1';
        }
        else
            s1[i] = '0';
    }
    cout << s1;
    return 0;
}