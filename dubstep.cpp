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
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 2;
        }
        else
        {
            cout << s[i];
            if (s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
            {
                cout << " ";
            }
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