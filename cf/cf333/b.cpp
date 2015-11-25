#include "bits/stdc++.h"

using namespace std;

#define ull unsigned long long int

int main(){

	ull n,t;

	cin >> n;

	std::vector<ull> v;

	for(int i = 0; i < n; i++){
		scanf("%llu",&t);
		v.push_back(t);
	}/*
for size in xrange(n,1,-1):
	for j in xrange(0, len(a)-size+1):
		if(abs(max(a[j:j+size]) - min(a[j:j+size])) <= 1):
			if(answer < size):
				answer = size
				break
print answer*/
	ull size = v.size();

	int answer = 0;

	for(int size = v.size(); size >= 1; size--){
		for(int j = 0; j <= v.size()-size; j++){
			//cout << max(v[j], v[j+size]) << " " << min(v[j], v[j+size]) << endl ;
			if(abs(*max_element(&v[j], &v[j+size]) - *min_element(&v[j], &v[j+size]) <= 1)){
				//cout << j << " "<< j+size << " " << *max_element(&v[j], &v[j+size]) << " " << *min_element(&v[j], &v[j+size]) << endl ;
				if(answer < size){
					answer = size;
					break;
				}
			}
		}
	}

	cout << answer << endl;

	return 0;
}