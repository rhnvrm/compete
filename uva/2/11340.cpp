#include "bits/stdc++.h"

using namespace std;

int main(){

	int n,k,m,t;
	char c;
	scanf("%d", &n);
	while(n--){
		scanf("%d\n",&k);
		map<char,int> mymap;

		for(int i = 0; i < k; i++){
			scanf("%c %d\n", &c, &t);
			//cout << i << c << t << endl;
			mymap[c] = t;
		}
		scanf("%d\n", &m);
		double money = 0.0;
		for(int i = 0; i < m; i++){
			string x;
			getline(cin,x);
			//cout << x << endl;
			for(int j = 0; j<x.size(); j++){
				if(mymap.find(x[j]) != mymap.end()){
					//printf("%c,", x[j]);
					money += 0.01*mymap[x[j]];
				}
			}
		}

		printf("%1.2lf$\n", money);
	}

	return 0;
}