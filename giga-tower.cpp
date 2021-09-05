#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    ll n, y, a;
    cin >> n;
    for (int i = 1; i <= 16; i++)
    {
        y = n + i;
        while (true)
        {
            if (y == 0)
            {
                break;
            }
            a = y % 10;
            if (a == 8 || a == -8)
            {
                cout << i << endl;
                return;
            }
            y = y / 10;
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