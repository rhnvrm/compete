#include <bits/stdc++.h>

using namespace std;


int is_b(int x){
	
	vector<int> a;
	for(int i = 0; i < 4; i++){
		a.push_back(x%10);
		x/=10;
	}

	sort(a.begin(), a.end());

	for(int i = 0; i < 3; i++){
		if(a[i] == a[i+1])
			return 0;
	}

	return 1;

}

int main(){

	int prev_year, next_year;
	cin >> prev_year;

	next_year = prev_year+1;

	while(is_b(next_year) == 0){
		next_year++;
		//cout << next_year << endl;
	}

	cout << next_year;
	return 0;
}