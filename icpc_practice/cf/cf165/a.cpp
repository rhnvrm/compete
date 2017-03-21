#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, sum =0;
	cin >> t;
	while(t--){
		cin >> n;
		sum = 0;
		//cout << n << endl;
		while(sum <= 360){
			sum = sum + (180-n);
			//cout << sum << endl;
		}

		if(sum-(180-n) == 360)
		 cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}