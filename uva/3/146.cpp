#include <bits/stdc++.h>

using namespace std;

int main(){

	string tmp, org;
	

	while(1){
		
		cin >> tmp;

		org = tmp;

		if(tmp == "#"){
			return 0;
		}

		sort(tmp.begin(), tmp.end());
		reverse(tmp.begin(), tmp.end());

		if(tmp == org){
			cout << "No Successor\n";
		}
		else{
			next_permutation(begin(org),end(org));

			cout << org << endl;	
		}
		
	
	}
	return 0;
}