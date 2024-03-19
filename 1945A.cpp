#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int x;
        cin >> n >> m >> x;
        vector<pair<int, char>> v;
        for (int i = 0; i < m; i++)
        {
            int a;
            char b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        vector<vector<int>>q(m+1);
        q[0].push_back(x);
        for (int i = 0; i < m; i++)
        {
            if(v[i].second=='?')
            {
                for(int j=0;j<q[i].size();j++)
                {
                    int d=(q[i][j]+v[i].first)%n;
                    int e=v[i].first%n;
                    int f=q[i][j]-e;
                    q[i+1].push_back(d);
                    q[i+1].push_back(f);
                }
            }
            else if(v[i].second=='0')
            {
                for(int j=0;j<q[i].size();j++)
                {
                    int y=(q[i][j]+v[i].first)%n;
                    q[i+1].push_back(y);
                }
            }
            else if(v[i].second=='0')
            {
                for(int j=0;j<q[i].size();j++)
                {
                    int w=v[i].first%n;
                    int z=q[i][j]-w;
                    q[i+1].push_back(z);
                }
            }
        }
        for(int i=0;i<q.size();i++)
        {
            for(int j=0;j<q[i].size();j++)
            {
                cout<<q[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
