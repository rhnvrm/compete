#include <bits/stdc++.h>

using namespace std;



int main(){

	long long n,x,sum=0;

	cin >> n >> x;


	for(int i = 1; i <= n; i++){
		 
		 if(x % i == 0 && (x/i) <= n)
		 	sum++;
	}
	cout << sum;

	return 0;
}