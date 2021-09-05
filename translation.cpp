#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    string s;
    string t;
    cin >> s >> t;
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        // cout << s.length() - i - 1;
        if (s[i] == t[t.length() - i - 1])
        {
            flag = 1;
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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}