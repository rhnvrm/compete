#include <bits/stdc++.h>

using namespace std;

long long product = 1;


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

long long vgcd(std::vector<long long> v){
	long long gcd = 1;

	for (long long i = 0; i < v.size(); i++)
	{
		gcd = GCD(gcd, v[i]);
	}

}

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

}


int main(){

	long long t;

	cin >> t;

	while(t--){
		product = 1;
		long long n, temp;

		cin >> n;

		std::vector<long long> v;

		for(int i = 0; i < n; i++){
			cin >> temp;
			v.push_back(temp);
		}

		std::vector<long long> empty;

		find_subsets(empty, v);

		cout << product % 1000000007 << endl;
	}

	return 0;
}