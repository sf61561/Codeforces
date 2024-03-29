#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		string s1=s.substr(0,2),s2=s.substr(3,2);
		int a=stoi(s1),b=stoi(s2);
		if(a==0 && b==0)
			cout<<"12:00 AM"<<endl;
		else if(a==12 && b==0)
			cout<<"12:00 PM"<<endl;
		else
		{
			if(a==0)
			{
				cout<<12;
				if(b<10)
					cout<<":0"<<b<<" AM"<<endl;
				else
					cout<<":"<<b<<" AM"<<endl;
			}
			else if(a==12)
			{
				cout<<12;
				if(b<10)
					cout<<":0"<<b<<" PM"<<endl;
				else
					cout<<":"<<b<<" PM"<<endl;
			}
			else if(a>12)
			{
				if(a%12<10)
				{
					cout<<0<<a%12;
					if(b<10)
						cout<<":0"<<b<<" PM"<<endl;
					else
						cout<<":"<<b<<" PM"<<endl;
				}
				else
				{
					cout<<a%12;
					if(b<10)
						cout<<":0"<<b<<" PM"<<endl;
					else
						cout<<":"<<b<<" PM"<<endl;
				}
			}
			else
				cout<<s<<" AM"<<endl;
		}
	}
}
