#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 1;
    if (n <= 3)
    {
        cout << "no";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int m = max(arr[i], arr[i + 1]);
        int o = min(arr[i], arr[i + 1]);
        for (int j = i; j < n - 3; j++)
        {
            int x = max(arr[j + 2], arr[j + 3]);
            int y = min(arr[j + 2], arr[j + 3]);
            if ((o < y && y < m && m < x) || (y < o && o < x && x < m))
            {
                cout << "yes";
                flag = 0;
                return;
            }
        }
    }
    if (flag)
    {
        cout << "no";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}