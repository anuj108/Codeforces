#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, value;
    cin >> n;
    int arr[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr[value]++;
    }
    int max = *max_element(arr, arr + 1001);
    // float ans=n/max;
    if (n == 1)
    {
        cout << "YES";
        return;
    }
    if ((n+1)/2 >= max)
        cout << "YES\n";
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}