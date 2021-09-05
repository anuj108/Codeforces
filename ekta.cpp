#include <iostream>
using namespace std;

int main()

{
    int arm(int n);
    int i, n, rem, temp, sum = 0;
    cin >> n;
    arm(n);
}
int arm(int n)
{
    int i, rem, temp, sum = 0;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";
    return 0;
}