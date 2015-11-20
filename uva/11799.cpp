#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;

	int a;

	scanf("%d", &t);
	int T = t;

	while(t--){
		int n;
		scanf("%d", &n);

		int max, temp;
		scanf("%d", &max);
		for(int i = 0; i < n-1; i++){
			scanf("%d", &temp);
			if(temp > max){
				max = temp;
			}
		}
		printf("Case %d: %d\n",T-t, max);
	}
	


	return 0;
}