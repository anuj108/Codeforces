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
    int a;
    while (true)
    {
        int remain = n % 10;
        if (remain >= 5)
        {
            a = remain - 5;

            cout << "-O|";
            if (a == 1)
            {
                cout << "O-OOO\n";
            }
            if (a == 2)
            {
                cout << "OO-OO\n";
            }
            if (a == 3)
            {
                cout << "OOO-O\n";
            }
            if (a == 4)
            {
                cout << "OOOO-\n";
            }
            if (a == 0)
            {
                cout << "-OOOO\n";
            }
        }
        else
        {
            cout << "O-|";
            if (remain == 1)
            {
                cout << "O-OOO\n";
            }
            if (remain == 2)
            {
                cout << "OO-OO\n";
            }
            if (remain == 3)
            {
                cout << "OOO-O\n";
            }
            if (remain == 4)
            {
                cout << "OOOO-\n";
            }
            if (remain == 0)
            {
                cout << "-OOOO\n";
            }
        }
        n = n / 10;
        if (n == 0)
            break;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}