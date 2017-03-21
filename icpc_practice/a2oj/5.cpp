#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	char x, str[256];

	vector<int> v;

	cin >> str;

	for(int i = 0; str[i] != '\0'; i++){
		x = str[i];
		if(x!='+')
			v.push_back((int)x - (int)'0');
	}




	sort(v.begin(), v.end());

	string s;
	stringstream out;
	for (int i : v)
	{
		out << i;
		out << '+';
	}

	s = out.str();

	for(int i = 0; s[i+1]!='\0'; i++) cout << s[i];
	return 0;
}