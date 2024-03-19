#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,c=0;
        cin>>n>>m>>k;
        vector<int>v(n),v1(m);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v1[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i]+v1[j]<=k)
                    c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
