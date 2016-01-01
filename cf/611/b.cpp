#include <bits/stdc++.h>


using namespace std;



int main(){

	ios::sync_with_stdio(false);

	long long a,b,c=0;
	// a <= 2^x - 1 <= b

	cin >> a >> b;

	for(int i = 0; (1LL << i)/2 <= b; ++i){
		for(int j = 0; j <= i -2; ++j){
			long long x = (1LL << i) - 1 - (1LL << j);
			c += a <= x && x <= b;
		}
	}
	cout << c << '\n';

	return 0;
}