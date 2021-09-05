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
    string new_s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            new_s = new_s + "";
        }
        else
        {
            new_s = new_s + ".";
            new_s = new_s + s[i];
        }
    }
    cout << new_s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}