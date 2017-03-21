#include <bits/stdc++.h>

using namespace std;

int main(){

	long long n,p,q,count;

	cin >> n;
	while(n--){
		cin >> p >> q;
		if(q-p >= 2) count++;
	}

	cout << count;
	return 0;
}