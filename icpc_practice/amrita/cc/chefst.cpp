#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	long long t, n1,n2,m;

	cin >> t;

	while(t--){
		cin >> n1 >> n2 >> m;
	 	do{
			long long val = min(n1,n2)/m;

			

			m = m -1;

		}while(val);
		//cout  << val << endl;
		
		cout << (n1) + (n2) << endl;

	}

	return 0;
}