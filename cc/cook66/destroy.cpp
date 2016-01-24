/*
	program: 
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
typedef vector<ll>	   vll;
const   int            inf = 0;
const   double         eps = 0;
const   int            ms  = 0;
const   int            md  = 0;
const   double         pi  = 2*acos(0);

template<class T> T power(T N,T P){ return (P==0)?  1: N*power(N,P-1); }


int main() {

	fast;

	ll t,n,temp;

	TC(t)
	{
		cin >> n;

		map<ll,ll> m;

		for(int i =0; i < n; i++){
			cin >> temp;
			m[temp]++;
		}

		ll val = 0,count = 0;

		while(m.size() != 0){
			/*
			debug(m.size());

			for(auto x : m){
				debug(x.first); debug(x.second);
			}
			cout << '\n';*/
			

			std::map<ll,ll>::iterator it=m.begin();
			std::map<ll,ll>::iterator itt=m.begin();

			if(m.size() > 1){
				itt = it;
				itt++;
				
				while(it->second != 0 && m.size() != 1){
					/*ll diff = it->second - itt->second;
					//debug(diff);
					if(diff <= 0){
						it->second = 0;
						itt->second = itt->second - it->second;
						debug(itt->second - it->second);
						count+= diff;
					}
					else{
						it->second = it->second - itt->second;
						count+= it->second - itt->second;
						//itt->second = 0;
						//debug(it->second - itt->second);
						std::map<ll,ll>::iterator ditt=itt;
						m.erase(ditt);
						itt++;
					}*/


					//it->second = it->second - itt->second >= 0 ? it->second - itt->second : 0;

					
					ll diff = it->second - itt->second;

					if(diff >= 0){
						it->second -= itt->second;
						count += itt->second;
						itt->second = 0;
						//m.erase(itt);
					}
					else{
						count+= it->second;
						it->second = 0;						
						itt->second -= it->second;
					}
					

				}


				//cout << itt->second;

				
			}	
			else if(m.size() == 1){
				count+=it->second;
				//debug(it->second);
			}

			m.erase(it);

		}

		cout << count << '\n';

	}
 
	return 0;
}