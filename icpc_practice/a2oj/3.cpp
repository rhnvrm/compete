#include <bits/stdc++.h>

using namespace std;

char s[7] = "AOYEUI";

bool isVowel(char x){
	
	x = toupper(x);

	for(int i = 0; i < 7; i++){
		if(x == s[i]){
			return true;
		}
	}
	return false;
}

int main(){

	int n;
	char input[256];

	cin >> input;

	for(int i=0; input[i] != '\0'; i++)
	{
		if(isVowel(input[i]) == false){
			cout << "." << (char)tolower(input[i]);
		}
	}
	cout << endl;
	return 0;
}