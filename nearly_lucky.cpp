#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int count = 0;
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            count++;
    }
    if (count == 4 || count == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
}