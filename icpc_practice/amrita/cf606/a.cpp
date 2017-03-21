#include "bits/stdc++.h"

using namespace std;

int main(){

ios::sync_with_stdio(false);

	long long a,b,c,x,y,z;

	cin >> a >> b >> c;
	cin >> x >> y >> z;

	long long d[3];

	d[0] = a-x, d[1] = b-y, d[2] = c-z;

	if(d[0] >= 0 && d[1] >=0 && d[2] >= 0){
		cout << "Yes\n";
		return 0;
	}
	else{
		long long neg;// = d[0]<0?d[0]:0 + d[1]<0?d[1]:0 + d[2]<0?d[2]:0;

		for(int i = 0; i < 3; i++){
			if(d[i] < 0) neg+= d[i];
		}

		//cout << neg << endl;
		for(int i = 0; i < 3; i++){
			if(d[i] > 0){
				neg += d[i]/2;
			}
		}

		if(neg >= 0){
			cout << "Yes\n" ;
			return 0;
		}
		else{
			cout << "No\n";
			return 0;
		}
	}

	return 0;

}