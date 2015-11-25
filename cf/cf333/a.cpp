#include "bits/stdc++.h"

using namespace std;

int main(){

	int n, m, x, y, t;
	unsigned long long X=0, Y=0;

	cin >> n >> x;

	for(int i = 0; i < n; i++){
		cin >> t;
		X += pow(x,n-i-1)*t;
	}

	cin >> m >> y;
	for(int i = 0; i < m; i++){
		cin >> t;
		Y += pow(y,m-i-1)*t;
	}

	//cout << X << " " << Y << endl;

	if(X == Y){
		cout << "=\n";
	}
	else if(X < Y){
		cout << "<\n";
	}
	else if(X > Y){
		cout << ">\n";
	}

	return 0;
}