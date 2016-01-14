/*
	program: DEVPERF Codechef Jan 16
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

#define INF 1000000007

char arr[1010][1010];

int main() {

	ios::sync_with_stdio(false);

	int t,n,m;

	TC(t)
	{
		cin >> n >> m;
	    int r=0, b=0, t=INF, l=INF, people=0, ysum=0;

	    rep(i,0,n){
	      rep(j,0,m){
	        cin>>arr[i][j];
	        if(arr[i][j]=='*'){
	          r=max(r,j);
	          l=min(l,j);
	          b=max(b,i);
	          t=min(t,i);
	          people++;
	        }
	      }
	    }

	    if(people == 0){
	    	cout<<0<<'\n';
	    	continue;
	    }
	    int Y = abs(b-t);
	    int X = abs(r-l);
	    int m = max(X,Y);
	   	cout<<m/2+1<<'\n';
	}
 
	return 0;
}

/*
		rep(i,0,n){
			rep(j,0,m){
				if(s[i][j] == '*'){
					mr = i;
					tmc=mc=j;
					flag1=1;
					break;
				}
			}
			if(flag1) break;
		}

		rep(j,0,tmc){
			rep(i,0,n){
				if(s[i][j] == '*'){
					mc = tmc = j;
					break;
				}
			}
		}

		for(int i = n-1; i >= 0; i--){
			for(int j = m-1; j >= 0; j--){
				if(s[i][j] == '*'){
					Mr = i;
					tMc = Mc = j;
					flag2 = 1;
					break;
				}
			}
			if(flag2) break;
		}

		for(int j = m-1; j > tMc; j--)
		{
			for(int i = n - 1; i >= 0 ; i--)
			{
				if(s[i][j]=='*')
				{
					Mc=tMc=j ;
					break ;
				}
			}
		}
 


*/