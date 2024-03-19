#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        string s,s1="map",s2="pie";
        cin>>s;
        for(int i=0;i<n;i++)
        {
            string s3=s.substr(i,3);
            if(s1==s3 || s2==s3)
            {
                c++;
                i=i+2;
            }
        }
        cout<<c<<endl;
    }
}
