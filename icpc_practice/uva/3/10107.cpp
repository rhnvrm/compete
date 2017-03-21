#include "bits/stdc++.h"

using namespace std;


#define ull unsigned long long


int main(){

	std::vector<ull> in;

	ull t;

	while(scanf("%llu\n", &t) != EOF){

		in.push_back(t);

		std::vector<ull> v = in;
		sort(v.begin(), v.end());

		/*for (std::vector<ull>::iterator i = v.begin(); i != v.end(); ++i)
		{
			cout << *i << " " ;
		}
		cout << endl;*/
		if(v.size() == 1){
			printf("%llu\n", v[0]);
		}
		else{
			if(v.size() % 2 == 0){
				ull m = v[v.size()/2] + v[v.size()/2 - 1];
				//cout << v[v.size()/2] << "-" <<v[v.size()/2 - 1] << endl;
				printf("%llu\n", m/2);
			}
			else{
				printf("%llu\n", v[v.size()/2]);
			}
		}
		//cout << " \n";

	}


	



	return 0;
}