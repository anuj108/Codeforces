#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    string str;
    getline(cin, str);
    int arr[26] = {0};
    str[0] = ' ';
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            int j = (int)str[i + 1] - 97;
            arr[j]++;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= 1)
        {
            count++;
        }
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}