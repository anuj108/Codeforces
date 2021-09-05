#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    long long t, res, ope = 0;
    cin >> t;
    while (t--)
    {
        long long a, b, min, diff;
        cin >> a >> b;
        long long max_exc = abs(a - b);
        if (max_exc == 0)
        {
            cout << "0 0\n";
        }
        else if (max_exc == 1)
        {
            cout << "1 0\n";
        }
        else
        {
            cout << max_exc << " " << std::min(a % max_exc, max_exc - (a % max_exc)) << "\n";
        }
    }
    return 0;
}