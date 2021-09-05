#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    char ch1, ch2;
    int count1 = 0, count2 = 0;
    int flag = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        ch1 = toupper(s1[i]);
        ch2 = toupper(s2[i]);
        if (ch1 == ch2)
        {
            flag = 1;
            continue;
        }
        else
        {
            if (ch1 > ch2)
            {
                cout << 1;
                flag = 0;
                break;
            }
            else if (ch1 < ch2)
            {
                cout << -1;
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << 0;
    }
    return 0;
}