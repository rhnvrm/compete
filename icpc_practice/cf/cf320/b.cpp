#include <bits/stdc++.h>
 
#define maxn 1005
using namespace std;
 
struct data
{
	int x, y, val;
 
	bool operator < ( data a ) const
	{
		return val < a.val;
	}
};
 
int mate[ maxn ];
priority_queue < data > pq;
 
int main()
{
	int n;
	cin >> n;
 
	int m = n << 1;
	memset( mate, -1, sizeof mate );
 
	data t;
	for( int i = 2; i <= m; i++ )
	{
		for( int j = 1; j < i; j++ )
		{
			int x;
			scanf( "%d", &x );
 
			t.x = i, t.y = j, t.val = x;
			pq.push( t );
		}
	}
 
	while( ! pq.empty() )
	{
		data d = pq.top(); pq.pop();
 
		if( mate[ d.x ] == -1 && mate[ d.y ] == -1 )
		{
			mate[ d.x ] = d.y, mate[ d.y ] = d.x;
		}
	}
 
	for( int i = 1; i <= m; i++ )
	{
		cout << mate[ i ] << " ";
	}
 
	cout << endl;
	return 0;
}