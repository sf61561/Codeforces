#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,d=0;
        cin>>n;
        vector<long long int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
                c++;
        }
        if(c==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=1;i<n-1;i++)
            {
                long long int q=min(v[i-1],v[i+1]);
                if(v[i]>=(2*q))
                {
                    v[i-1]=v[i-1]-q;
                    v[i]=v[i]-(2*q);
                    v[i+1]=v[i+1]-q;
                }
            }
            for(int i=0;i<n;i++)
            {
                //cout<<v[i]<<" ";
                if(v[i]==0)
                    d++;
            }
            //cout<<endl;
            if(d==n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
