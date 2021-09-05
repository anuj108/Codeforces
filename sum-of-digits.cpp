#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    string s, new_s;
    cin >> s;
    ll sum = 0;
    int count = 0;
    ll length = s.length();
    while (length != 1)
    {
        sum = 0;
        for (ll i = 0; i < length; i++)
        {
            sum = sum + (int)s[i] - 48;
        }
        s = to_string(sum);
        length = s.length();
        count++;
    }
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}