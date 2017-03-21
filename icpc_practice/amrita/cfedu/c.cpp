#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	int n;
	std::vector<int> v;
	cin >> n;

	long long sum = 0, temp;

	for(int i = 0; i < n;i++){

		cin >> temp;
		v.push_back(temp);

		sum += temp;
	}

	long long avg = sum/n;
	cout << avg << endl;

	sort(v.begin(), v.end());

	long long diffn = 0, diffp = 0, d =0;

	int i = 0;
	for(i = 0; i < n ; i++){
		d = avg - v[i];
		if(d < 0)
			diffn += d;
		else 
			diffp += d;
	}

	cout << diffn << diffp << '\n';

	return 0;
}