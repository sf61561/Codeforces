#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int d=(b/3);
		if(b%3==1)
		{
			d++;
			c=c-2;
		}
		else if(b%3==2)
		{
			d++;
			c=c-1;
		}
		int f=(c/3);
		if(c%3!=0)
		{
			f++;
		}
		if(c<0)
			cout<<-1<<endl;
		else
			cout<<a+d+f<<endl;
	}
}
