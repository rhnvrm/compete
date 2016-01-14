/*
	program: RGAME Codechef Jan 16
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
#define rep(i, x, y)   for (ll i = x; i < y; i ++)
#define MOD 1000000007

ll mem_sum[100005];

ll pow2(ll x, ll y){
	if(y==0||x==1) 
		return 1;
	if(y==1) 
		return x;
	ll p=pow2(x, y/2);

	ll mul=(p*p)%MOD;

	if(y%2==0)
		return mul;
	else
		return (mul*(x%MOD))%MOD;
}

int main() {

	fast;

	ll t, n;

	TC(t)
	{
		cin >> n;

		ll a[n+1];

		rep(i,0,n+1){
			cin >> a[i];
		}

		mem_sum[0] = (2*a[0])%MOD;

		ll t1,t2;

		rep(i,1,n+1){
			t1 = (pow2(2, i)%MOD*a[i])%MOD;
			mem_sum[i] = (mem_sum[i-1]%MOD+t1)%MOD;
		}

		ll sum = (2*a[0]*a[1])%MOD;

		rep(i,2,n+1){
			t1=(2*sum)%MOD;
			t2=(a[i]*mem_sum[i-1])%MOD;
			sum=(t1+t2)%MOD;
		}

		cout << sum << '\n';

	}
 
	return 0;
}