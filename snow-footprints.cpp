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
    int c = 0, pos, pos2;
    int flag1 = 0, flag2 = 0;
    int init, last, lastr = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R' || s[i] == 'L')
        {
            if (c == 0)
                init = i + 1;
            c++;
        }
        if (s[i] == '.' && (s[i - 1] == 'L' || s[i - 1] == 'R'))
        {
            last = i;
        }
        if (s[i] == 'L' && s[i - 1] == 'R')
            lastr = i;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[lastr - 1] == 'R' && s[lastr] == 'L')
        {
            cout << init << " ";
            cout << lastr;
            return;
        }
        else if (s[i] == 'L')
        {
            cout << last << " " << i;
            return;
        }
        else if (s[i] == 'R')
        {
            cout << init << " " << last + 1;
            return;
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