#include <bits/stdc++.h>

using namespace std;


void swap(int *r, int *s)
{
   int temp = *r;
   *r = *s;
   *s = temp;
   return;
} 

int main(){

	long long a[101][101];

	long long T, n, m, empty = 2147483647;

	cin >> T;

	while(T--){
		cin >> n >> m;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}

		a[0][0] = empty;
		int cx = 0, cy = 0;
		if(a[cx][cy] < a[cx+1][cy])
			
		while(!swappable)

	}


	return 0;
}