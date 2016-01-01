#include <bits/stdc++.h>


using namespace std;

int main(){

	int x;

	string m;

	scanf("%d of ", &x);
	cin >> m;
	if(m.compare("week") == 0){

		//starting with friday
		if(x == 5 || x == 6) printf("53\n");
		else{
			printf("52\n");
		}

	}
	else{

		if(x == 30){
			printf("11\n");
		}
		else if(x==31){
			printf("7\n");
		}
		else{
			printf("12\n");
		}

	}

	return 0;
}