#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, char>> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        vector<set<int>> q(m + 1);
        q[0].insert(x);
        for (int i = 0; i < m; i++)
        {
            if (v[i].second == '?')
            {
                for (auto s:q[i])
                {
                    int d = (s + v[i].first) % n;
                    if(d==0)
                        d=n;
                    q[i + 1].insert(d);
                    if(v[i].first>=s)
                    {
                        int e = (abs(s-v[i].first))%n;
                        if(e==0)
                            e=n;
                        int f = n-e;
                        if(f==0)
                            f=n;
                        q[i + 1].insert(f);
                    }
                    else
                    {
                        int p=s-v[i].first;
                        q[i + 1].insert(p);
                    }
                }
            }
            else if (v[i].second == '0')
            {
                for (auto s:q[i])
                {
                    int y = (s + v[i].first) % n;
                    if(y==0)
                        y=n;
                    q[i + 1].insert(y);
                }
            }
            else if (v[i].second == '1')
            {
                for (auto s:q[i])
                {
                    if(v[i].first>=s)
                    {
                        int w = (abs(s-v[i].first))%n;
                        if(w==0)
                            w=n;
                        int z = n-w;
                        if(z==0)
                            z=n;
                        q[i + 1].insert(z);
                    }
                    else
                    {
                        int p=s-v[i].first;
                        q[i + 1].insert(p);
                    }
                }
            }
        }
        cout<<q[m].size()<<endl;
        for (auto s:q[m])
        {
            cout << s << " ";
        }
        cout<<endl;
    }
    return 0;
}
