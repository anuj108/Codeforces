#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[j][i];
        }
        if (sum == 0)
            continue;
        else
        {
            cout << "NO"
                 << "\n";
            break;
        }
    }
    if (sum == 0)
        cout << "YES"
             << "\n";
    return 0;
}