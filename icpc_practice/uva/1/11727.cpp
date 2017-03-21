#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;

	int a[4];

	scanf("%d", &t);
	int n = t;

	while(t--){
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		sort(a, a + 3);
		printf("Case %d: %d\n",n-t, a[1]);
	}
	


	return 0;
}