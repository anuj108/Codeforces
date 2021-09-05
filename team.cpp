#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        if ((arr[i][0] + arr[i][1] + arr[i][2]) >= 2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}