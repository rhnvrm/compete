/*
	program: earth and meteorites qual 2 he
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

	ll t,n,m,q,x,y;

	

	TC(t)
	{
		cin >> n >> m >> q;
		bitset<100005> r,d;
		r[1] = 1;
		d[1] = 1;
		r[m] = 1;
		d[n] = 1;
		for(int i = 1; i <= q; i++){
			cin >> x >> y;
			r[x] = 1;
			d[y] = 1;
		}
		/*cout << ' ';
		for(int i = 1; i <= m; i++){
			cout << r[i];
		}
		cout << '\n';
		for(int j = 1; j <= n; j++){
			cout << d[j] << '\n';
		}
		cout << '\n';*/
		ll max_area = INT_MIN;
		ll min_area = INT_MAX;
		ll count = 0;
		for(int i = 1; i < m; i++){
			if(r[i] == 1){
				ll index_next_1 = i, hor_dist;

				for(int k = i+1; k <= m; k++){
					if(r[k] == 1){
						index_next_1 = k;
						break;
					}
				}

				hor_dist = index_next_1 - i;

				
				for(int j = 1; j < n; j++){
					if(d[j] == 1){
						ll ver_dist = j;

						index_next_1 = j;

						for(int k = j+1; k <= n; k++){
							if(d[k] == 1){
								index_next_1 = k;
								break;
							}
						}
					
						ver_dist = index_next_1 - j;
						

						/*debug(i);
						debug(j);
						debug(hor_dist);
						debug(ver_dist);
						debug(hor_dist*ver_dist);*/
						count++;
						//if(hor_dist <= 1) hor_dist = 1;
						//if(ver_dist <= 1) ver_dist = 1;
						max_area = max(max_area, hor_dist*ver_dist);
						min_area = min(min_area, hor_dist*ver_dist);
					}
				}

				
			}
		}
		/*debug(count);
		debug(min_area);
		debug(max_area);*/

		cout << count << ' ' << min_area << ' ' << max_area << '\n';
	}
 
	return 0;
}