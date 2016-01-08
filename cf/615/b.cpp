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
#define rep(i, x, y)   for (int i = x; i <= y; i ++)
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


/*
typedef pair<int, int> ii; // In this chapter, we will frequently use these
typedef vector<ii> vii; // three data type shortcuts. They may look cryptic
typedef vector<int> vi;
// but they are useful in competitive programming
vi dfs_num;
// global variable, initially all values are set to UNVISITED
void dfs(int u) {
// DFS for normal usage: as graph traversal algorithm
dfs_num[u] = VISITED;
// important: we mark this vertex as visited
for (int j = 0; j < (int)AdjList[u].size(); j++) { // default DS: AdjList
ii v = AdjList[u][j];
// v is a (neighbor, weight) pair
if (dfs_num[v.first] == UNVISITED)
// important check to avoid cycle
dfs(v.first);
// recursively visits unvisited neighbors of vertex u
} } // for simple graph traversal, we ignore the weight stored at v.second

*/

/* http://codeforces.com/blog/entry/6318 */

#define MXE(a,n)       *max_element(a,a+n)
const int MAX = 1e5 + 7;


vector <int> graph[MAX];
ll mx[MAX], vis[MAX], cnt;

ll dfs(int r){

    ll &ret = vis[r];
    if(ret) return ret;
    ret = 1;
    int l = sz(graph[r]);

    rep(j,0,l-1){

        int uu = graph[r][j];
        if(uu < r) ret = max(ret, 1+dfs(uu));

    }
    mx[r] = ret*l;
    return ret;

}

int main() {

	fast;

	ll n,m,u,v;

    cin >> n >> m;

    while(m--){

        cin >> u >> v;
        graph[v].pb(u);
        graph[u].pb(v);
       
    }

    rep(i,1,n){
        int rr = dfs(i);
    }

    ll ans = MXE(mx,n+1);

    cout << ans << '\n';
    return 0;

}