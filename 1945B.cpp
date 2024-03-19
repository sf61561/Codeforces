#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c,d,e;
		cin>>a>>b>>c;
		d=(c/a)+1;
		e=(c/b)+1;
		cout<<d+e<<endl;
	}
}
