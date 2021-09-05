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
    ll index1, index2;
    ll min1 = LONG_LONG_MAX;
    ll min2 = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (min1 > arr[i])
        {
            min1 = arr[i];
            index1 = i;
        }
    }
    for (ll j = 0; j < n; j++)
    {
        if (j != index1)
        {
            if (min2 > arr[j])
            {
                min2 = arr[j];
            }
        }
    }
    if (min1 == min2)
    {
        cout << "Still Rozdil\n";
    }
    else
    {
        cout << index1 + 1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}