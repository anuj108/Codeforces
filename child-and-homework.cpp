#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int length[4];
    length[0] = s1.length() - 2;
    length[1] = s2.length() - 2;
    length[2] = s3.length() - 2;
    length[3] = s4.length() - 2;
    int c = 0;
    int flag = 0;
    int ans[4];
    for (int i = 0; i < 4; i++)
    {
        c = 0;
        for (int j = 0; j < 4; j++)
        {

            if (i != j)
            {
                if (length[i] * 2 <= length[j])
                {
                    c++;
                }
                if (length[i] >= length[j] * 2)
                {
                    c--;
                }
            }
        }
        ans[i] = c;
    }
    int key;
    for (int i = 0; i < 4; i++)
    {
        if (ans[i] == 3 || ans[i] == -3)
        {
            flag++;
            key = i;
        }
    }
    if (flag == 0 || flag >= 2)
        cout << "C";
    else
        cout << char(key + 65);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}