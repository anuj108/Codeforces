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
    int arr[n][2];
    bool b = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
        if (arr[i][0] < arr[i][1])
            b = true;
    }
    if (b)
    {
        cout << "Happy Alex\n";
    }
    else
    {
        cout << "Poor Alex";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}