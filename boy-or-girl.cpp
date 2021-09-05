#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        char ch = 97 + i;
        for (int j = 0; j < s.length(); j++)
        {

            if (ch == s[j])
            {
                count++;
                break;
            }
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}