#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, p, q;
    cin >> n >> p;
    int k;
    int arr[n + 1] = {0};
    for (int i = 0; i < p; i++)
    {
        cin >> k;
        arr[k] = 1;
    }
    cin >> q;
    int flag = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> k;
        arr[k] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            flag = 0;
            cout << "Oh, my keyboard!\n";
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
        cout << "I become the guy.\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}