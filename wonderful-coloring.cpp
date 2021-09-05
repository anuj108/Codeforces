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
    int in_flag = 0;
    int flag = 0, count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        flag = 0;
        for (int j = i; j < s.length(); j++)
        {
            if (s[i] == s[j + 1])
            {
                flag = 1;
                count++;
                break;
            }
        }
        if (flag == 0)
        {
            in_flag++;
        }
    }
    cout << count + in_flag / 2;
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