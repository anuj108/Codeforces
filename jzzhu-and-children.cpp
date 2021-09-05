#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, m, value;
    int max = 0;
    cin >> n >> m;
    double arr[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= m)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max <= ceil(arr[i] / m))
        {
            max = ceil(arr[i] / m);
            temp = i + 1;
        }
    }
    cout << temp;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}