#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, x;
    cin >> n;
    string s, ans;
    ll ma = INT_MAX;
    ll mi = -1 * ma;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> x >> ans;
        if (s == ">=")
        {
            if (ans == "Y")
            {
                if (x > mi)
                    mi = x;
            }
            else
            {
                if (x < ma)
                    ma = x - 1;
            }
        }
        else if (s == "<=")
        {
            if (ans == "Y")
            {
                if (x < ma)
                    ma = x;
            }
            else
            {
                if (x > mi)
                    mi = x + 1;
            }
        }
        else if (s == "<")
        {
            if (ans == "Y")
            {
                if (x <= ma)
                    ma = x - 1;
            }
            else
            {
                if (x >= mi)
                    mi = x;
            }
        }
        else if (s == ">")
        {
            if (ans == "Y")
            {
                if (x >= mi)
                    mi = x + 1;
            }
            else
            {
                if (x <= ma)
                    ma = x;
            }
        }
    }
    if ((ma - mi) >= 3)
    {
        cout << (ma + mi) / 2;
        return;
    }
    if (mi <= ma)
    {
        cout << ma;
    }
    else
    {
        cout << "Impossible";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}