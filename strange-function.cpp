#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;

int main()
{
    lli t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        lli sum = 0;
        lli lcm = 1;

        for (lli i = 2; i < 1e16; i++)
        {
            if (lcm > n)
                break;

            lli L = n / lcm;
            lcm = (lcm / __gcd(i, lcm)) * i;
            lli R = n / lcm;

            lli add = ((L - R) * i) % mod;

            sum = (sum + add) % mod;
        }

        cout << sum << "\n";
    }
    return 0;
}