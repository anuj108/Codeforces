#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int mini = arr[n - 1] - arr[0];
    for (int i = 1; i <= m - n; i++)
    {
        int temp = arr[i + n - 1] - arr[i];
        if (temp < mini)
        {
            mini = temp;
        }
    }
    cout << mini;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}