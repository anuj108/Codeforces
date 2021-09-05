#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() != s2.length())
    {
        cout << "NO";
        return;
    }
    int c = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            c++;
        }
    }
    int flag = 0;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i] && c == 2)
        {
            flag = 1;
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}