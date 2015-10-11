#include <bits/stdc++.h>
using namespace std;

int main()
{
	int y;
	int i=0,j=0,k=0,l=0;
	cin >> y;
	while(i==j||i==k||i==l||j==k||j==l||k==l)
	{
		y++;
		i=y/1000;
		j=(y/100)%10;
		k=(y%100)/10;
		l=y%10;
	}
	cout << y;
	return 0;
}
