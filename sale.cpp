#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, m, count = 0, sum = 0;
    cin >> n >> m;
    int arr[n];
    int index[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (arr[i] < 0)
            sum = sum + arr[i];
    }
    cout << abs(sum);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}