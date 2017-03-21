#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	long long n, m, k, s, t, cc = 0, cd = 0, minc = 1000000000, mind = 10000000000;
	long long a[1000001], b[1000001], c[1000001], d[1000001];

	cin >> n >> m >> k >> s;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		minc = minc<a[i]?minc:a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		mind = mind<b[i]?mind:b[i];
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> t;
		if(t == 1){
			cin >> c[cc];
			cc++;
		}
		else{
			cin >> d[cd];
			cd++;
		}
	}
}