#include "bits/stdc++.h"
#define pb push_back


using namespace::std;



int a[26+1];

int main(){

	ios::sync_with_stdio(false);

	string s;

	std::vector<int> v;

	cin >> s;

	for(int i = 0; i < 26; i++){
		a[i] = 0;
	}

	for(int i =0 ; i < s.length(); i++){
		a[s[i] - 'a']++;
	}

	for(int i = 0; i < 26; i++){
		if(a[i] & 1) v.pb(i);
	}


	for(int i = 0; i < v.size()/2; i++){
		a[v[i]] += 1;
		a[v[v.size() - i]] -= 1;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << a[v[i]];
	}
	cout << "\n";

	for(int i = 0; i < 26; i++){
		while(a[i] != 0){
			cout << (char)('a'+i); 
			a[i]--;
		}
	}

	cout << "\n";

	return 0;
}