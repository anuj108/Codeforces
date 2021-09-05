#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll largest = -1;
    int flag = 0;
    ll sum = 0, count = 0, zero_c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zero_c++;
        }
        sum = sum + arr[i];
        if (sum % 9 == 0 && sum != 0 && arr[i] != 0)
        {
            count++;
        }
    }
    for (ll i = 0; i < count * 9; i++)
    {
        if(zero_c>0)
        {
        cout << 5;
        flag = 1;
        }
    }
    if (flag == 1)
    {
        for (ll i = 0; i < zero_c; i++)
        {
            cout << 0;
        }
    }
    else if (zero_c)
    {
        cout << 0;
    }
    else
    {
        cout << -1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}