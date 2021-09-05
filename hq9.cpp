#include <iostream>
using namespace std;
int main()
{
    string s;
    int flag = 0;
    cin >> s;

    if (s.length() <= 100 && s.length() >= 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((int)s[i] > 32 && (int)s[i] < 127)
            {
                if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
                {
                    flag = 1;
                }
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
        cout << "NO\n";
    return 0;
}