/*
	program: fifa 2nd attempt codeburst 4.0 hackerearth
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

	int n;
	cin>>n;
	int hk[n+1],ak[n+1];
	int color[100001]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>hk[i]>>ak[i];
		color[hk[i]]++;
	}
	int h,a,temp;
	for(int i=1;i<=n;i++)
	{
		h=n-1;
		a=n-1;
		temp=color[ak[i]];
		h+=temp;
		a-=temp;
		cout<< h << ' ' << a <<'\n';
	}
 
	return 0;
}