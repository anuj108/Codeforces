#include <iostream>
using namespace std;
int main()
{
    int t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n >= 3)
        {
            int arr[n];
            for (int j = 0; j < n; j++)
            {
                cin >> arr[j];
            }
            for (int a = 0; a < n; a++)
            {
                int num=arr[a];
                int count=0;
                for(int b=0;b<n;b++)
                {
                    if(num==arr[b])
                    count++;
                }
            }
        }
    }
}