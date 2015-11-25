#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int main(){
	ios::sync_with_stdio(false);

	int t;

	LL sum, n;

	cin >> t;

	while(t--){
		sum = 0;
		cin >> n;

		sum = n*(n+1)/2;
		for(LL d = 1; d <= n; d <<= 1) sum -= d*2;

		cout << sum << "\n";


	}

}