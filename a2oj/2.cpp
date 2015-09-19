#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	char s[256];
	cin >> n;
	while(n--){
		cin >> s;
		if(strlen(s)-1 >= 10)
			cout << s[0] << strlen(s)-2 << s[strlen(s)-1] << endl;
		else
			cout << s <<endl;
	}

	return 0;
}