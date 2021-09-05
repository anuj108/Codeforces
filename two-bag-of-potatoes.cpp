#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    ll y, k, n;
    cin >> y >> k >> n;
    bool b = false;
    ll i = 1;
    for (i = 1; i <= n - y && ; i++)
    {
        if ((i + y) <= n)
        {
            if ((i + y) % k == 0)
            {
                cout << i << " ";
                b = true;
            }
        }
    }
    if (!b)
    {
        cout << -1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}