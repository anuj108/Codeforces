#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    bool isvalid = true;
    for (int i = 0; i < m; i++)
    {
        if (n <= v[i].first)
        {
            isvalid = false;
            break;
        }
        n += v[i].second;
    }
    if (isvalid)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}