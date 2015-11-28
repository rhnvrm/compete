#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

typedef std::vector<ll> vl;

ll a[200005];

int main(){

	ios::sync_with_stdio(false);

	
	
	ll n,m,temp;
	cin >> n >> m; 

	for(ll i = 0; i < n; i ++){
		cin >> a[i];
	}

	sort(a, a+n);

	for(ll i = 0; i < m; i++){
		//b
		cin >> temp;

		ll* p = std::upper_bound( a, a + n, temp );
		if( p == a + n )
		     std::cout << p - a << " ";
		else
		     std::cout //<< "The first element greater is " << *p
		               /*<< " at position " */<< p - a << " ";

	}

	cout << "\n";
	return 0;

}