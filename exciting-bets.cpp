#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        int max = 0;
        int res, count = -1;
        cin >> a >> b;
         int max_exc = abs(a - b);
        if (a > b)
        {
            x = a;
            while (x-- && b != -1)
            {
                res = __gcd(a, b);
                if (max < res)
                {
                    max = res;
                }
                a++;
                b++;
            }
        }
        else if (b > a)
        {
            x = b;
            max = 0;
            while (x-- && a != -1)
            {
                res = __gcd(b, a);
                if (max < res)
                {
                    max = res;
                }
                a--;
                b--;
            }
        }
        else
        {
            count = 0;
            res = 0;
        }
        cout << max_exc << " " <<  << "\n";
    }
    return 0;
}