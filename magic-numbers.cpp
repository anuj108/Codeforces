#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    ll n;
    cin >> n;
    string s = to_string(n);
    int flag = 0;
    if (s[0] == '4')
        flag = 1;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] != '1' && s[i] != '4')
            flag = 1;
        if (s[i] == '4' && s[i + 1] == '4' && s[i + 2] == '4')
            flag = 1;
    }
    if (flag == 0)
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