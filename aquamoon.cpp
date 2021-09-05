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
    int a[n], b[n];
    int sum = 0, sum_a = 0, sum_b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_a = sum_a + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sum_b = sum_b + b[i];
        sum = sum + abs(a[i] - b[i]);
    }
    if (sum_a != sum_b)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sum / 2 << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] > b[i] && a[j] < b[j])
                {
                    a[i] = a[i] - 1;
                    a[j] = a[j] + 1;
                    cout << i + 1 << " " << j + 1 << endl;
                    j--;
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}