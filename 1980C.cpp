#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,j=0,c=0;
		bool ok=true;
		cin>>n;
		vector<long long int>a(n),b(n);
		map<long long int,long long int>m1,m2;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			m2[b[i]]++;
		}
		cin>>m;
		vector<long long int>d(m);
		for(int i=0;i<m;i++)
		{
			cin>>d[i];
			m1[d[i]]++;
		}
		if(m2[d[m-1]]==0)
		{
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				if(m1[b[i]]>0)
				{
					m1[b[i]]--;
				}
				else
				{
					ok=false;
					break;
				}
			}
		}
		if(ok)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
