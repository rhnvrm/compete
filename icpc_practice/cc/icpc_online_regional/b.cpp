#include <bits/stdc++.h>

using namespace std;

long long product = 1;

/*
long long GCD(int x, int y){
	while(x * y != 0){
		if(x >= y){
			x = x % y;
		}
		else{
			y = y % x;
		}
	}

	return x + y;
}
*/

long long vgcd(const long long arr[], n){
	long long gcd = 1;

	for (long long i = 0; i < n; i++)
	{
		gcd = __gcd(gcd, v[i]);
	}

}

/*
long long find_subsets(vector<long long> so_far, vector<long long> rest){

	if (rest.empty() == 1){
		if(!so_far.empty()){
			product = product * vgcd(so_far);
			cout << product << endl;
		}
	}
	else{
		vector <long long> new_far = so_far;
		new_far.push_back(rest[0]);
		find_subsets(so_far, std::vector<long long>(rest.begin() + 1, rest.end()) );
		find_subsets(so_far, std::vector<long long>(rest.begin() + 1, rest.end()) );
	}

}*/


long long p[100005];

int main(){

	long long t;

	cin >> t;


	while(t--){
		product = 1;
		long long N, temp;

		cin >> N;

		for(int i = 0; i < N; i++){
			cin >> p[i];
		}


		for (int i = 0; i < (1 << N); i++) {
			for (int j = 0; j < N; j++){
				if (i & (1 << j))
				// if bit j is on
				printf("%lld ", p[j]);
				// this is part of set
			}
			printf("\n");
		}


		cout << product % 1000000007 << endl;
	}

	return 0;
}