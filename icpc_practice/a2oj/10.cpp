#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[10][10], number;

	int sum = 0;

	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			cin >> number;
			if(number == 1){
				cout << i << j << endl;
				//if(i!=3)
				sum += abs(i-3)+abs(j-3);
				//if(j!=3)
				//	sum += abs(j-3);
				break;
			}
		}
	}

	cout << sum << endl;

}