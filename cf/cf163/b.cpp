//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


string s;


string iter(string, int);

int main()
{
	int n,t,i;
	cin >> n;
	cin >> t;	
	cin >> s;
	for(i=0;i<t;i++)
	{
		s=iter(s,n);
	}
	cout << s;
	return 0;
}

string iter (string s, int len)
{
	int i=0;
	while(i<len-1)
	{
		if(s[i]=='B' && s[i+1]=='G')
		{
			s[i]='G';
			s[i+1]='B';
			i+=2;
		}
		else
			i++;
	}
	return s;
}
