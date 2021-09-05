#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n;
    cin >> n;
    string s, new_s;
    cin >> s;
    int flag = 0;
    string ans = "";
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i = i + n)
    {
        if (s[i] == s[i + n - 1])
        {
            ans = ans + s[i];
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}