#include <bits/stdc++.h>

int main(){

	int a,b,k,n,m;

	while(scanf("%d", &k) , k){
		scanf("%d %d", &n, &m);
		for(int i = 0; i < k; i++){
			scanf("%d %d",&a, &b);
			if(a==n||b==m) printf("divisa\n");
			else{
				if(b < m){
					printf("S");
				}
				else{
					printf("N");
				}
				if(a < n){
					printf("O\n");
				}
				else{
					printf("E\n");
				}
			}
		}
	}
	


	return 0;
}