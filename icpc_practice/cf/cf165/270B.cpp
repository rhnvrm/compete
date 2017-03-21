#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	int ans(0);
	int a[10010];
	cin >> t;
	for(i=0;i<t;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<t-1;i++)
	{
		//cout << endl << a[i] << a[i+1] << endl;
		if(a[i]>a[i+1])
		{
			ans+=1;
		}
	}
	cout << ans;
	return 0;
}
