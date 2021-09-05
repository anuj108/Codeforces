#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    float sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    float result = sum / n;
    cout << result;

    return 0;
}