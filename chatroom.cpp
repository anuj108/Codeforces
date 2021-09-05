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
    string str = "hello";
    int j = 0, count = 0, flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == str[j])
        {
            j++;
            count++;
            if (count == 5)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}