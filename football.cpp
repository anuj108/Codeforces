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
    string s1, s2;
    cin >> s1;
    int count1 = 1, count2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s2;
        if (s1.compare(s2) == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << s1 << "\n";
    }
    else
        cout << s2 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}