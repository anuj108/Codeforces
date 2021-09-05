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
    getline(cin, s);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s.at(i) == '?' || s.at(i) == ' ')
        {
            continue;
        }
        else
        {
            if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'y' || s.at(i) == 'A' || s.at(i) == 'E' || s.at(i) == 'I' || s.at(i) == 'O' || s.at(i) == 'U' || s.at(i) == 'Y')
            {
                cout << "YES";
                break;
            }
            else
            {
                cout << "NO";
                break;
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