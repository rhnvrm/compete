#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, k, m;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &k, &m);
	int aux1, aux2;
	for (int i = 0; i < a; ++i){
		scanf("%n", &aux1);
	}
	scanf("%d", &aux2);
	if(aux1< aux2) printf("YES\n");
	else printf("NO\n");
	return 0;
}