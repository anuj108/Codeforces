#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    ll k, n;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            cout << 2 * k - 1;
        }
        if (k > n / 2)
        {
            cout << 2 * (k - n / 2);
        }
    }
    else
    {
        if (k <= (n / 2 + 1))
        {
            cout << 2 * k - 1;
        }
        if (k > (n / 2 + 1))
        {
            // cout << ceil(m / 2);
            cout << 2 * (k - (n / 2 + 1));
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