#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    int stime = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        stime += arr[i];
    }
    int br = (n - 1) * 10;
    int jokes = br / 5;
    int ans = jokes + (d - (stime + br)) / 5;
    // cout << stime + br;
    // cout << ans;
    if ((stime + br) <= d)
        cout << ans;
    else
        cout << -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}