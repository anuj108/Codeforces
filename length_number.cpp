#include <iostream>
using namespace std;
int main()
{
    long long a, b, n;
    cin >> a >> b >> n;
    long long p;
    long long c = a;

    long long count = 0;
    long long flag = 0;
    for (int j = 0; j < n; j++)
    {
        if (flag != 1)
            c = c * 10;
        p = 0;
        for (int i = 0; i <= 9; i++)
        {
            c = c + p;
            if (c % b == 0)
            {
                if (flag == 0)
                {
                    flag = 2;
                    cout << c;
                    count++;
                    break;
                }
                flag = 1;
                cout << 0;
                count++;
                break;
            }
            p = 1;
        }
        if (flag == 0)
            break;
    }
    if (flag == 0)
        cout << "-1\n";
    return 0;
}