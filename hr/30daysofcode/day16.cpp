/*
	program: 
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
typedef vector<ll>    vl;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 0;
const   double         eps = 0;
const   int            ms  = 0;
const   int            md  = 0;
const   double         pi  = 2*acos(0);

template<class T> T power(T N,T P){ return (P==0)?  1: N*power(N,P-1); }


int main() {

	fast;

	ll n,t;
    
    cin >> n;
    
    vl v;
    
    for(ll i; i < n; i++) {
        cin>>t;
        v.pb(t);
    }
    
    sort(all(v));
    
    ll min_d = abs(v[0] - v[1]);
    //ii p; p.first = v[0]; p.second = v[1];
    
    for(ll i; i < n-1; i++){
        if(min_d > abs(v[i] - v[i+1])){
            min_d = abs(v[i] - v[i+1]);
           // p.first = v[i]; p.second = v[i+1];
        }
    }
    
    vector<pair <ll,ll> >vp;
    
    for(ll i; i < n-1; i++){
        if(min_d == abs(v[i] - v[i+1])) {
            ii x; x.first = v[i]; x.second = v[i+1];
            vp.pb(x);//new pair<ll,ll>(v[i],[v+1]));
        }  
    }
    
    for(auto x : vp)
        cout << x.first << ' ' << x.second << ' ';
 
	return 0;
}
