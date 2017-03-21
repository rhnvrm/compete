#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m, temp;
	std::vector<int> v;
	cin >> n;
	cin >> m;

	for(int i = 0; i < n;i++){

		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), std::greater<int>());

	int i = 0;
	for(i = 0; i < n && m > 0; i++){
		m-= v[i];
	}

	cout << i<< endl;

	return 0;
}