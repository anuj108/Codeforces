#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m1 = a + b * c;
    int m2 = (a * b) + c;
    int m3 = a * b * c;
    int m4 = (a + b) * c;
    int m5 = a + b + c;
    int m6 = a * (b + c);
    int arr[6] = {m1, m2, m3, m4, m5, m6};
    cout << *max_element(arr, arr + 6);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}