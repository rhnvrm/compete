#include <bits/stdc++.h>


using namespace std;

int main(){
	long long t, n, minusones, temp;

	cin >> t;
	while(t--)
	{	
		minusones = 0;
		cin >> n;
		cin >> temp;
		for(int i = 1; i < n; i++){
			cin >> temp;
			if(temp == -1) minusones++;
		}

		double x = 1 + (minusones/2.0);
		cout << x << '\n';
	}
}