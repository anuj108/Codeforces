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
    int arr[n];
    int diff;
    int min_pair = INT_MAX;
    int index1, index2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        diff = abs(arr[i] - arr[(i + 1) % n]);
        // cout << diff << "\n";
        if (min_pair > diff)
        {
            min_pair = diff;
            index1 = i;
            index2 = (i + 1) % n;
        }
    }
    cout << index1 + 1 << " " << index2 + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}