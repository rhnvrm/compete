#include <bits/stdc++.h>

using namespace std;


int main(){

    int n, t;
    cin >> n;

    int a[101], b[101];

    for(int i = 1; i <= n; i++){
        cin >> t;
        b[t] = i;
    }

    for(int i = 1; i <= n; i++){
        cout << b[i] << " ";
    }

	return 0;
}