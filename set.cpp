#include <bits/stdc++.h>
using namespace std;
set<int >a,b;
int main()
{ 
    char c;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
        {
            cin >> c;
        if(c=='S'){
            a.insert(i);
            b.insert(j);
        }
     }
 
    }
    cout<<n*m-(a.size()*b.size())<<endl;
    
  return 0;  
}