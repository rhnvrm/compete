#include <bits/stdc++.h>

using namespace std;

int a[1000001];
bool dp[1000001][2];

int main(){

	long long n, m;

	cin >> n >> m;

    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
        a[i] %= m;
    }

    int selected = 0;

    for(int i = 1; i <= n; i++)
    {
        dp[a[i]][1-selected] = 1;

        for(int j=1;j<m;j++)
        {
            if(dp[j][selected])
            {
                // 1-selected => reverse
                dp[(j+a[i])%m][1-selected]=1;
                dp[j][1-selected]=1;
            }

        }
        selected = 1-selected;
        if(dp[0][selected])
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }

    cout<<"NO"<<endl;
	return 0;
}