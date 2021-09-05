#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2 * n];
        int odd = 0, eve = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < 2 * n; j++)
        {
            if (arr[j] % 2 == 0)
            {
                eve++;
            }
            else
                odd++;
        }
        if (odd == eve)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}