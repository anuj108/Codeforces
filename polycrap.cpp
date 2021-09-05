#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    ll value;
    cin >> value;
    if (value % 3 == 0)
        cout << value / 3 << " " << value / 3 << "\n";
    else if (value % 3 == 2)
    {
        cout << value / 3 << " " << (value / 3) + 1 << "\n";
    }
    else if (value % 3 == 1)
    {
        cout << (value / 3) + 1 << " " << (value / 3) << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
}