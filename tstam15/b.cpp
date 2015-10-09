#include <bits/stdc++.h>

using namespace std;

/*

Input:
23128765
3
7 2
9 3
15 5

Output:
9
4
5

*/

/*
The bar is made up of several blocks, where the ith block has durability S[i], 
which is a number between 0 and 9. A segment is defined as any contiguous 
group of one or more blocks.
If they cut out a segment of the bar from ith block to jth block (i<=j), 
then the durability of the resultant segment is given by 
( S[i]*10(j-i) + S[i+1]*10(j-i-1) + S[i+2]*10(j-i-2) + … + S[j] * 10(0) ) % M.
In other words, if W(i,j) is the base-10 number formed by concatenating 
the digits S[i], S[i+1], S[i+2], …, S[j], then the durability of the segment (i,j) is W(i,j) % M.
For technical reasons that ISRO will not disclose, the durability of 
the segment used for building the launch tower should be exactly L. 
Given S and M, find the number of ways ISRO can cut out a segment from 
the steel bar whose durability is L.
*/

/*
Input

The first line contains a string S. The ith character of this string represents the durability of ith segment.
The next line contains a single integer Q, denoting the number of queries.
Each of the next Q lines contain two space separated integers, denoting M and L.
*/


int main(){

	string S;
	cin >> S;
	
	int q;
	cin >> q; // # of quereis
	
	int n = S.length();
	
	while(q--){
		int m,L;
		cin >> m >> L;

		vector< vector<int> > dp(n, vector<int>(m));

		dp[0][(S[0]-'0')%m]++;//conv to num

		for(int i=1;i<n;i++){

			for(int j=0;j<m;j++){
//( S[i]*10(j-i) + S[i+1]*10(j-i-1) + S[i+2]*10(j-i-2) + … + S[j] * 10(0) ) % M.
				int currentPos=(j * 10) % m + (S[i]-'0')%m;

				dp[i][currentPos % m]+=dp[i-1][j];

			}

			dp[i][(S[i]-'0') % m]++;
		}

		int ans=0;


		for(int i = 0; i < n; i++){

			ans = ans + dp[i][L];

		}

		cout << ans << endl;
	}
} 