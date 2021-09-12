#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, a = 0, b = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a++;
        else if (s[i] == 'b')
        {
            b++;
        }
        else
        {
            cout << -1 << " " << -1 << "\n";
            return;
        }
    }
    if (b < 1 || a < 1)
    {
        cout << -1 << " " << -1 << "\n";
        return;
    }
    else if (a == b)
    {
        cout << 1 << " " << n << "\n";
        return;
    }
    int flag = 0;
    for (int i = 0; i < n-1 ; i++)
    {
       if(s[i]!=s[i+1])
       {
            cout << i+1 << " " << i+2 << "\n";
            flag=1;
            return;
       }
    }
    if (!flag)
    {
        cout << -1 << " " << -1 << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}