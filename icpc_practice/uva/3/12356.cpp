#include "bits/stdc++.h"

using namespace std; 

int a[10005];

int main(){
	int b,s;

	while(scanf("%d %d\n", &s,&b), (s||b)){
		for(int i = 1; i <= s; i++){
			a[i] = i;
		}
		for(int i = 0; i < b; i++){
			int l,r;
			scanf("%d %d\n", &l, &r);

			//print left
			int printed = 0;
			for(int j = l - 1; j >= 1; j--){
				if(a[j] != 0){
					printf("%d ", j);
					printed = 1;
					break;
				}
			}
			if(!printed){
				printf("* ");
			}

			//print right
			printed = 0;
			for(int j = r + 1; j <= s; j++){
				if(a[j] != 0){
					printf("%d\n", j);
					printed = 1;
					break;
				}
			}
			if(!printed){
				printf("*\n");
			}

			//kill them
			for(int k = l; k <= r; k++){
				a[k] = 0;
			}
/*
			for(int k = 1; k <= s; k++){
				cout << a[k] << " ";
			}
			cout << "\n";*/
		}
		printf("-\n");
	}
	return 0;
}