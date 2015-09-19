#include <bits/stdc++.h>

using namespace std;

int main(){

	long long n = 1, count = 0, x;

	cin >> x;

	if(x == 1) cout << x;
	else{
		while(n <= x) {
			n *= 2;
			//cout << n << endl;
		}
		cout << 1 << x << n;
		
	}

	

	
	return 0;
}