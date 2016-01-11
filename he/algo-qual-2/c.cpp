/*
	program: shil and square sum
	author : rhnvrm
*/



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
typedef vector<long long>    vll;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 0;
const   double         eps = 0;
const   int            ms  = 0;
const   int            md  = 0;
const   double         pi  = 2*acos(0);


int main() {

	fast;

	ll n,k,temp;
	int MOD=1000000007;
	cin >> n >> k;

	vll a;
	//n--; k--;
	a.pb(-1);
	for(int i = 1; i <= n; i++)
	{
		cin >> temp;
		a.pb(temp);
	}

	for(int i = 1; i <= n-k+1; i++){
		ll sum = 0;
		for(int j = 1; j <= k; j++){
			sum+= (j*j*(a[i+j-1]))%MOD;
			//debug(j*j*(a[i+j-1]));
			//debug(j);
			//debug(a[i+j-1]);
		}

		cout << sum << ' ';
	}
 	cout << '\n';
	return 0;
}