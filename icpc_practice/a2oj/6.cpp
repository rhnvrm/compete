#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, a;
	
	vector<int> v;

	cin >> n;

	long long sum = 0, count = 0, tsum = 0;

	while(n--){
		cin >> a;
		sum += a;
		v.push_back(a);
	}

	sum /= 2;

	sort(v.begin(), v.end(), std::greater<int>());

	while(tsum <= sum && count <= v.size()){
		tsum += v[count++];
	}

	cout << count;

	return 0;
}