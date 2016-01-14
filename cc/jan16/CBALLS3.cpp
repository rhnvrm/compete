/*
	program: CBALLS Codechef Jan 16
	author : rhnvrm
*/

/*input
6
3
11 13 15
3
15 13 11
3
99 99 99
4
1 1 1 1
5
1 2 3 4 5
3
10 15 20
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

 
int main() {

	ios::sync_with_stdio(false);

	ll t,n;

	TC(t)
	{
		cin>>n;

		ll a[n];

		rep(i,0,n)
			cin>>a[i];

		ll num=0;

		if(n==1)
		{
			if(a[0]==1)
				cout<<"1\n";
			else 
				cout<<"0\n";
			continue;
		}

		rep(j,0,n-1)
		{
			if(a[j]>a[j+1])
			{
				num += (a[j]-a[j+1]);
				a[j+1]=a[j];
			}
		}

		int maxIndex=a[n-1];

		if(maxIndex==1)
		{
			cout<<n<<"\n";
			continue;
		}
		int min_no=n;
		ll ans[maxIndex+1];
		//memset(ans,0,maxIndex+1);
		for(int i = 0; i<maxIndex+1; i++) 
			ans[i]=0;
		
		for(int j=2;j<=maxIndex;j++)
		{ 
			for(int i=0;i<n;i++)
			{   
				ans[j]+= (j-(a[i]%j))%j;
				if(ans[j]>min_no)
				{
					break;
				}

			}

			if(ans[j]<min_no)
				min_no=ans[j];
			if(ans[j]==0)
				break;

		}
		ll min_ans=ans[2];
		for(int i=2;i<=maxIndex;i++)
			if(ans[i]<min_ans)
				min_ans=ans[i];

		cout << num+min_ans << "\n";
	}
 
	return 0;
}