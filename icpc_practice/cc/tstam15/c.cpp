#include<bits/stdc++.h>
using namespace std;
long long a[101][101];
int main() {
    long long tc,m,n;
    cin >> tc;
    while(tc--) {
        
        cin >>m>>n;

        ///array input_iterator_tag
        for(long long i=0; i < m ; i++) {
            for(long long j = 0 ; j < n ; j++) {
                cin >> a[i][j];
            }
        }

        ///to prlong long

        long long sum;
        long long answer = INT_MIN ;

        for(long long i = 1; i < m -1; i++){
            for(long long j=1; j < n -1; j++){
                sum = a[i][j];

                long long mins = min(min(j,n -j-1),min(i,m -i-1));              
                for(long long k=1; k<=mins; k++){
                    sum += a[i-k][j-k] + a[i-k][j+k] + a[i+k][j-k] + a[i+k][j+k];
//cout << sum;
                    answer = max(answer,sum);
 
                }
            }
        }
        for(long long i=0; i<m -1; i++){
            for(long long j=0; j<n -1; j++){
                sum = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
                answer = max(sum,answer);
                long long mins = min(min(j,n -j-2),min(i,m -i-2));
                for(long long k=1; k<=mins; k++){
                    sum += a[i-k][j-k] + a[i-k][j+k+1] + a[i+k+1][j-k] + a[i+k+1][j+k+1];
                    //cout << sum;
                    answer = max(answer,sum);
 
                }
            }
        }/*
        //odd
        for(long long i = 1; i < m-1; i++){
            for(long long j = 1; j < n-1; j++){
                long long xmin = min(i,m-i-1);
                long long ymin = min(j,n-j-1);
                long long minb = min(xmin, ymin);
                sum = a[i][j];
                for(long long k = 1; k <= minb; k++){
                    sum += a[i-k][j-k] + a[i+k][j+k]+ a[i+k][j-k] + a[i-k][j+k];
                    answer = max(answer, sum);
                }
            }
        }
        //even
        for(long long i = 0 ; i < m-1 ; i++) {
            for(long long j = 1 ; i < n-1 ; i++) {
                sum = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
                long long mins = min(min(j,m-j-2),min(i,m-i-2));
                for(long long k = 1; k <= mins; k++){ 
                    //long long element_to_ad = a[i+k][i+j];
                    sum += a[i-k][j-k] + a[i-k][j+k+1] + a[i+k+1][j-k] + a[i+k+1][j+k+1];
                    
                    answer = max(answer, sum);

                }

            }
        }*/

        cout << answer << endl;
    }

    return 0;
}
