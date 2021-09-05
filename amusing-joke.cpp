#include <iostream>
using namespace std;
int main()
{
    string s, s1, s2;
    cin >> s1 >> s2 >> s;
    string s3 = s1 + s2;
    int flag;
    if (s.length() == s3.length())
    {
        for (int i = 0; i < 26; i++)
        {
            int count = 0, count1 = 0;
            char ch = 65 + i;
            for (int j = 0; j < s.length(); j++)
            {
                if (ch == s[j])
                {
                    count++;
                }
            }
            for (int a = 0; a < s3.length(); a++)
            {
                if (ch == s3[a])
                {
                    count1++;
                }
            }
            if (count1 == count)
            {
                flag = 1;
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";
    return 0;
}