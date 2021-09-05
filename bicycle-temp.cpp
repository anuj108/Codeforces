#include <iostream>

using namespace std;

int main()
{
    int n, m, a[64], b[64], i, j, ma = 0, br = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                if (b[j] / a[i] > ma)
                {
                    ma = b[j] / a[i];
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                if (b[j] / a[i] == ma)
                {
                    br++;
                }
            }
        }
    }
    cout << br << endl;
}