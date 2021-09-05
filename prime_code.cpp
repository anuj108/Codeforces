#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    int a;
    for (int i = n + 1; i <= m; i++)
    {
        count = 0;
        //prime
        a = i;
        for (int j = 2; j <= a; j++)
        {
            if (a % j == 0)
            {
                count++;
            }
        }
        if (a == m)
        {
            if (count != 1)
                cout << "NO";
        }
        if (count == 1)
        {
            if (a == m)
                cout << "YES";
            else
            {
                cout << "NO";
                break;
            }
        }
    }
    return 0;
}