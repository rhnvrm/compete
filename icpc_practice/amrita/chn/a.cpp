#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	long long t, n, k, temp;

	cin >> t;

	while(t--){
		cin >> n >> k;

		long long sum = 0;

		for(int i = 0; i < n; i++){
			cin >> temp;
			if((temp + k)%7 ==0){
				sum++;
			}
		}
		cout << sum << '\n';
	}

	return 0;
}