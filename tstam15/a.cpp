#include <bits/stdc++.h>

using namespace std;

int main(){
/*
3
3 10
7 3 1
3 5
7 3 1
3 1
7 3 1

The first line contains an integer T denoting the number of test cases.
Then for each test case, the first line contains two space separated integers N and P denoting number of astronauts and the threshold score respectively.
The second line of each test case contains N space-separated integers A1, A2, ..., AN denoting the fitness scores of the astronauts.
Note: All fitness scores are distinct and are given in descending order.*/
	
	long long t, n, p, sum;

	cin >> t;

	while(t--){
		cin >> n >> p;
		sum = 0;

		std::vector<long long> v;

		long long temp;
		for(int i = 0; i < n; i++){
			cin >> temp;
			if (temp >= p){
				sum++;
			}
		}

		cout << sum << endl;


	}

	return 0;

}