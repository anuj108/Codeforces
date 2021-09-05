#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (a == 1)
        {
            if ((n - 1) % b == 0)
            {
                cout << "Yes\n";
            }
            else
                cout << "No\n";
        }
        else
        {
            long long z = 1;
            int flag = 0;
            while (z <= n)
            {
                if ((n - z) % b == 0)
                {
                    cout << "Yes\n";
                    flag = 1;
                    break;
                }
                z = z * a;
            }
            if (flag == 0)
                cout << "No\n";
        }
    }
    return 0;
}