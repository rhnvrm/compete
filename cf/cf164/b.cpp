#include <bits/stdc++.h>

using namespace std;




int main(){
	
	int n;

	cin >> n;

	long long sum = n;

	for(int i = 1; i <= n-1; i++){
		sum += n * i;
	
		sum -= (i)*(i+1)*(2*i + 1)/6;
	}



	cout << sum << endl;

}