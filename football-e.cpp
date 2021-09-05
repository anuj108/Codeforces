#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    string s;
    cin >> s;
    int flag = 0;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1' && s[i + 3] == '1' && s[i + 4] == '1' && s[i + 5] == '1' && s[i + 6] == '1')
        {
            flag = 1;
            break;
        }
        else if (s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0' && s[i + 3] == '0' && s[i + 4] == '0' && s[i + 5] == '0' && s[i + 6] == '0')
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}