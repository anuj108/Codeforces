#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toast_drnk, slice, salt;
    toast_drnk = k * l / nl;
    slice = c * d;
    salt = p / np;
    int res = min(toast_drnk, slice) ;
    res=min(res,salt);
    cout << res/n;
    return 0;
}