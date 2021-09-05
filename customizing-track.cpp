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
    ll arr[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    ll extra = sum % n;
    cout << extra * (n - extra) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}