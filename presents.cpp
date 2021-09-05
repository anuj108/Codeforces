#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, k;
    cin >> n;
    int loc[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        loc[k] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << loc[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}