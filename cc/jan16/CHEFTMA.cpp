/*
	program: CHEFTMA Codechef
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
	// your code goes here

	fast;


	int a[100001],b[100001],c[200002],d[100001],t,n,m,k,i,j,x=0,y=0,sum=0;
	
	
	
	TC(t)
	{
		x=0,y=0,sum=0;
		cin>>n>>k>>m;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
			d[i]=a[i]-b[i];
		sort(d,d+n);
		

		for(i=0;i<m+k;i++)
			cin>>c[i];
		sort(c,c+m+k);
		

		j=m+k-1;
		for(i=n-1;i>=0;i--)
		{
			while(d[i]-c[j]<0)
				j--;
			while(d[i]-c[j]>=0 && x!=1)
			{	
				d[i]-=c[j];
				x++;
				j--;
			}
			x=0;
			//j--;
		}
	
		for(j=0;j<n;j++)
		{
			sum+=d[j];
		}
		cout<<sum<<"\n";

	}
	return 0;
}
