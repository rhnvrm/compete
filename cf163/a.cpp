#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long n, count = 0;
	cin >> n;
	if(n == 1){
		cout << 0;
	}
	else{
		char x, prev;

		cin >> prev;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x == prev){
				count++;
			}
			prev = x;
		}
		cout << count -1;
	}
	return 0;
}