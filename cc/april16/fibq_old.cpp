/*
	program: FIBQ APRIL 2016 Codechef
	author : rhnvrm
*/

//!! TODO Debug ON/OFF | VLL

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
#define rep(i, x, y)   for (int i = x; i < y; i ++)
#define repi(i, x, y)  for (__typeof(x) i = x; i > y; i --)
#define fore(itr, x)   for (__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr ++)
#define forei(itr, x)  for (__typeof(x.end()) itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
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

template<class T> T power(T N,T P){ return (P==0)?  1: N*power(N,P-1); }

ll MOD = 1000000007;

ll fib[1000] = {0};

ll fibo_dp(int n)
{
    fib[1] = 1;
    fib[2] = 1;
    if (fib[n] == 0)
    {
        for (int j = 3; j <= n; ++j)
        {
            if (fib[n] == 0)
                fib[j] = fib[j - 1] + fib[j - 2];
            else
                continue;
        }
    }
    return fib[n];
}

int main() {

	fast;

	ll n,m,temp, type, x,y;
	char c_type;

	cin >> n >> m;
	ll v[100009];
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	for(int i = 0; i < m; i++){
		cin >> c_type;
		if(c_type == 'Q') type = 1;
		else type = 0;

		cin >> x >> y;

		if(type == 0){
			v[x-1] = y;
		}
		else if(type == 1){
			ll sol = 0;

			ll set_size = y-x+1;

			unsigned int pow_set_size = pow(2, set_size);

			ll counter, j, sum;

			for(counter = 1; counter < pow_set_size; counter++)
		    {	
		    	sum = 0;
		    	for(j = 0; j < set_size; j++)
		       	{
		        	//cout << sum <<" s ";
		        	if(counter & (1<<j))
		            	sum += v[x-1+j];
		       	}
		       	sol += fibo_dp(sum)%MOD;
		       	
		    }

			cout << sol << '\n';
		}
	}
 
	return 0;
}