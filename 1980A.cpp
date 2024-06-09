#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,c=0;
		cin>>n>>m;
		string s;
		cin>>s;
		map<char,int>m1;
		for(int i=0;i<n;i++)
		{
			m1[s[i]]++;
		}
		for(char i='A';i<'H';i++)
		{
			if(m1[i]<m)
				c=c+(m-m1[i]);
		}
		cout<<c<<endl;
	}
}
