#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll mini = n / m;
    ll mini_r = n % m;
    // cout << mini_r << "\n";
    // if (mini > 1)
    // {
    //     mini = mini * (mini - 1) / 2 * m;
    //     mini_r = mini_r * (mini_r - 1) / 2;
    //     cout << mini_r + mini << " ";
    // }
    // else
    // {
    //     cout << mini_r << " ";
    // }
    ll b, c;
    if (mini > 1)
    {
        if (mini_r == 0)
        {
            cout << mini * (mini - 1) / 2 * m << " ";
        }
        else
        {
            b = (mini + 1) * (mini) / 2 * (mini_r);
            // cout << b << "  \n";
            c = (mini) * (mini - 1) / 2 * (m - mini_r);
            // cout << c << "\n";
            cout << c + b << " ";
        }
    }
    else
    {
        if (mini == 1)
        {
            cout << mini_r << " ";
        }
        else
        {
            cout << 0;
        }
    }
    ll maxi;
    ll a;
    if (m != 1)
    {
        a = n - m + 1;
        cout << a * (a - 1) / 2;
    }
    else
    {
        cout << n * (n - 1) / 2;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}