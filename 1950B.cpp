#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0,d=0,e=0;
		char a;
		cin>>n;
		for(int i=0;i<2*n;i++)
		{
			if(i%2==0 && i>0)
				c++;
			if(c%2==0)
			{
				for(int j=0;j<2*n;j++)
				{
					if(j%2==0 && j>0)
						d++;
					if(d%2==0)
						a='#';
					else
						a='.';
					cout<<a;
				}
				d=0;
			}
			else
			{
				for(int j=0;j<2*n;j++)
				{
					if(j%2==0 && j>0)
						e++;
					if(e%2==0)
						a='.';
					else
						a='#';
					cout<<a;
				}
				e=0;
			}
			cout<<endl;
		}
		//cout<<1<<endl;
	}
}
