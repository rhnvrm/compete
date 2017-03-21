#include <bits/stdc++.h>
using namespace std;
int f(int);

int main()
{
	int n,i;
	int a(0);
	int b(0);
	cin >> n;
	for(i=1;i<n;i++)
	{
		a+=n-i;
	}
	for(i=1;i<n;i++)
	{
		b+=f(i);
	}
	b+=1;
	int ans = a+b;
	cout << ans;
	return 0;
}

int f(int x)
{
	int i;
	int out = 0;
	for(i=1;i<x;i++)
	{
		out+=x-i;
	}
	out+=1;
	return out;
}
