#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define endl '\n'
#define F firs
#define S second
#define all(x) x.begin(), x.end()
#define allr(c) c.rbegin(), c.rend()
#define mem(x) memset(x, 0, sizeof(x))
#define PI 3.1415926535897932384626

typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;
typedef vector<vl> vvl;
typedef map<ll, ll> ml;
typedef map<ll, bool> mlb;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        ar[i] = arr[i];
    }
    ll m;
    cin >> m;
    sort(arr, arr + n);
    for (ll i = 0; i < m; i++)
    {
        ll sum = 0;
        ll type, l, m;
        cin >> type >> l >> m;
        if (type == 1)
        {
            for (ll j = l - 1; j < m; j++)
            {
                sum = sum + ar[j];
            }
            cout << sum << "\n";
        }
        else
        {

            for (ll j = l - 1; j < m; j++)
            {
                sum = sum + arr[j];
            }
            cout << sum << "\n";
        }
    }
}

int main()
{
    solve();
    return 0;
}