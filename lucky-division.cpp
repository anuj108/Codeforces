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
    int flag = 0;
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            continue;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "YES\n";
    }
    else
    {
        if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 || n % 777 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}