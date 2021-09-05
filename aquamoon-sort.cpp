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
    ll a[n];
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        a[i] = 1;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                a[j] = abs(1 - a[j]);
                a[j + 1] = abs(1 - a[j + 1]);
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int flag = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 1)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc;
    cin >> tc;
    for (ll t = 1; t <= tc; t++)
    {
        solve();
    }
}