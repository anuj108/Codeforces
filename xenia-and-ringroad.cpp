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
    ll arr[m];
    ll time;
    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    time = arr[0] - 1;
    for (ll i = 0; i < m-1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            time = time + abs(arr[i] - arr[i + 1]);
        }
        else if (arr[i] > arr[i + 1])
        {
            time = time + abs(n - arr[i] + arr[i + 1]);
        }
        else
        {
            continue;
        }
    }
    cout << time;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}