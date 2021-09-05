#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i][j];
            
        }
        if (sum == 0)
        count++;
    }
    if (count == 3)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}