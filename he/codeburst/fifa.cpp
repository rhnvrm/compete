/*
	program: fifa codeburst 4.0 hackerearth
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

int main()
{
	fast;

	ll n,i,j,k,N;
	vector<pair<ll,ll> > v;
	pair<ll,ll> w1,w2;
	ll A[100001]={0},B[100001]={0};
	cin>>N;
	n=N;
	k=0;
	while(n--)
	{
		cin >> i >> j;
		v.push_back(make_pair(i,j));
		A[k++]=N-1;
	}
	for(i=0;i<v.size()-1;i++)
	{
		w1=v[i];
		for(j=i+1;j<v.size();j++)
		{
			w2=v[j];
			if(w1.first==w2.second)
				A[j]++;
			else
				B[j]++;
			if(w1.second==w2.first)
				A[i]++;
			else
				B[i]++;
		}
	}
	for(i=0;i<N;i++)
	{
		cout << A[i] << ' ' << B[i] << '\n';
	}
}