#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

int main()
{

	long long n, count = 0;
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			a[i][j] = 0;
		}
	}
	/*cout 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}
*/
	long long x, y;
	for(int t = 0; t < n; t++){
		cin >> x >> y;
		a[x-1][y-1] = 1;
	}
	cout << "OUTPUT:\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}
	

	return 0;
}