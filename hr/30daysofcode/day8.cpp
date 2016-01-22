/*
	program: day 8 30 days of code
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
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 0;
const   double         eps = 0;
const   int            ms  = 0;
const   int            md  = 0;
const   double         pi  = 2*acos(0);


int main() {

	fast;
    ll n;
    cin >> n;
    
    map<string,ll> m;
    
    for(int i = 0; i < n; i++){
        string name;
        ll p;
        cin >> name >> p;
        m[name]=p;
    }
    
    string line;
    getline(cin, line);
    while(getline(cin, line)){
        
        if(m.find(line) == m.end() /*&& line.length()*/) cout << "Not found\n"; 
        else cout << line << '=' << m[line] << '\n';
    }
 
	return 0;
}