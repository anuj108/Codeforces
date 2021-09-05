#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int a, b, n;
    cin >> n >> a >> b;
    int count = 0;
    int arr1[n], arr2[n];
    for (int i = a + 1; i <= n; i++)
    {
        for (int j = n; j >= (n - b); j--)
        {
            if (i == j)
            {
                count++;
            }
        }
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}