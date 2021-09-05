#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n = 1e5 + 3;
    long long head[n];
    long long t, value;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        cin >> value;
        head[value] = i + 1;
    }
    long long nu_q, q;
    long long v = 0, p = 0;
    cin >> nu_q;
    for (long long i = 0; i < nu_q; i++)
    {
        cin >> q;
        v = v + head[q];
        p = p + t + 1 - head[q];
    }
    cout << v << " " << p;
    return 0;
}