#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string a,b;

	cin >> a >> b;

	

	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);

	if(a.compare(b) < 0) cout << -1;
	else if(a.compare(b) > 0) cout << 1;
	else cout << 0;


	return 0;
}