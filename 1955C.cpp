#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,c=0,s;
		cin>>n>>k;
		vector<long long int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		int l=0,r=n-1;
		if(k==1 && v[0]==1)
		{
			cout<<1<<endl;
			continue;
		}
		if(k%2!=0)
		{
			v[0]--;
			k--;
		}
		while(k>0 && l<r)
		{
			if(v[l]<v[r])
			{
				if((k-(v[l]*2))>=0)
				{
					c++;
				}
				else
				{
					break;
				}
				v[r]=v[r]-v[l];
				k=k-(v[l]*2);
				l++;
			}
			else if(v[l]>v[r])
			{
				v[l]--;
				k--;
				if((k-(v[r]*2)+1)>=0)
				{
					c++;
				}
				else
				{
					break;
				}
				v[l]=v[l]-v[r]+1;
				k=k-(v[r]*2)+1;
				r--;
			}
			else
			{
				if((v[l]+v[r])<=k)
				{
					c=c+2;
					k=k-(v[l]+v[r]);
					r--;
					l++;
				}
				else if(((v[l]+v[r])-1)==k)
				{
					c=c+1;
					l++;
					k=0;
				}
				else
				{
					break;
				}
			}
		}
		if(l==r && v[l]<=k)
		{
			cout<<c+1<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
	}
}
