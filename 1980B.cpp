#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,f,k,c,d=0,l,u;
		cin>>n>>f>>k;
		vector<int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		c=v[f-1];
		sort(v.begin(),v.end(),greater<int>());
		/*for(int i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;*/
		for(int i=0;i<n;i++)
		{
			if(v[i]==c && d==0)
			{
				l=i;
				u=i;
				d++;
			}
			else if(v[i]==c && d>0)
			{
				u=i;
			}
		}
		//cout<<l<<" "<<u<<endl;
		if(l==u)
		{
			if(l+1>k)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else
		{
			if(k>=u+1)
				cout<<"YES"<<endl;
			else if(k<l+1)
				cout<<"NO"<<endl;
			else
				cout<<"MAYBE"<<endl;
		}
	}
}
