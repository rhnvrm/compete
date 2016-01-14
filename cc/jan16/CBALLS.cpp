#include <bits/stdc++.h>

using namespace std;
#define mp             make_pair
#define pb             push_back
#define fi             first
#define se             second
#define sz(x)          (int)((x).size())
#define fill(x, y)     memset(x, y, sizeof(y))
#define all(x)         (x).begin(), (x).end()
#define TC(x)          cin >> (x); while(x --)
#define debug(x)       { cout << #x << " = " << (x) << '\n'; }
#define rep(i, x, y)   for (__typeof(x) i = x; i < y; i ++)
#define repi(i, x, y)  for (__typeof(x) i = x; i > y; i --)
#define fore(itr, x)   for (__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr ++)
#define forei(itr, x)  for (__typeof(x.end()) itr = x.end() - 1; itr != x.begin() - 1; itr --)
typedef long long      ll;
typedef pair<int, int> ii;
typedef pair<ii, int>  iii;
typedef vector<int>    vi;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 0;
const   double         eps = 0;
const   int            ms  = 0;
const   int            md  = 0;
const   double         pi  = 2*acos(0);

int main(){

    ios::sync_with_stdio(false);

    int t,n,a[10005];
    vi v;


    TC(t){
        cin >> n;
        int last,c = 0,temp;
        v.clear();
        for(int i  = 0 ; i < n; i++){
        	cin >> a[i];
        }

        for(int i = 0; i < n; i++){

            //debug((a[i]&1));

            if(i!=0){
                if(a[i-1] > a[i]){
                    int diff = a[i-1]-a[i];
                    a[i]+= diff;
                   //debug(a[i-1]-a[i]);
                    c   += diff;
                }
            }
/*
            if((a[i]&1) == 1){//isodd

                c++;a[i]++;

            }*/
        }

        rep(i,0,n){
            debug(a[i]);
        }

        cout << c << '\n';
    }

return 0;
}
