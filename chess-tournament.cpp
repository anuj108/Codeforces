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
    string s;
    cin >> s;
    char c = 'X';
    char v[n][n] = {0};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2')
            count++;
    }
    if (count == 1 || count == 2)
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                v[i][j] = c;
            }
            else if (s[i] == '1')
            {
                v[i][j] = '=';
                v[j][i] = '=';
            }
            else
            {
                if (v[i][j] != '=')
                {
                    v[i][j] = '0';
                    v[j][i] = '0';
                }
            }
        }
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == '0' && flag == 0)
            {
                v[i][j] = '+';
                v[j][i] = '-';
                flag = 1;
            }
            else if (flag == 1 && v[i][j] == '0')
            {
                v[j][i] = '+';
                v[i][j] = '-';
            }
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j];
        }
        cout << "\n";
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