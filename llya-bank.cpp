#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    ll n, ans;
    cin >> n;

    if (n < 0)
    {
        int k = abs(n / 10);
        int sec_last = k % 10;
        int a=abs(n % 10);
        if (sec_last > a)
        {
            ans = k / 10*10 + a;
        }
        else
            ans = k;

        cout << -ans;
    }
    else
        cout << n;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}