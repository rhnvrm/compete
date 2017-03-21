#include <bits/stdc++.h>

using namespace std;

long long a[100];

int main(){

    ios::sync_with_stdio(false);

    long long t, n;

    cin >> t;



    while(t--){

        cin >> n;

        for(int i = 0; i < n; i++){

            cin >> a[i];

        }

        long long ans = n;

        for(int s = 1; s <= n; s++){

            for(int i = 0; i+s < n; i++){

                long long sum = 0, prd = 1;

                for(int j = i; j <= s+i; j++){

                    sum+= a[j];
                    prd*= a[j];
                    //cout << a[j];
                }
                //cout << endl;
                if(sum == prd) ans++;

            }

        }

        cout << ans << '\n';

    }

return 0;
}
