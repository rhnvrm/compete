#include <bits/stdc++.h>
using namespace std;

//int greedy(int, int, long long int[]);
int greedy2(int, int, long long int[]);
int main()
{
	int n,q,i;
	long long int gold[100000];
	int ks[100000];
	cin >> n; //number of houses
	for(i=0;i<n;i++)
	{
		cin >> gold[i]; //gold plates in i-th house
	}
	cin >> q; //number of k-values to come
	for(i=0;i<q;i++)
	{
		cin >> ks[i]; //k-values to solve the problem at
	}
/*
	cout << "----" << endl;
	for(i=0;i<n;i++)
	{
		cout << gold[i] << endl;
	}
*/

	sort(&gold[0],&gold[n]);
	
/*
	cout << "----" << endl;
	for(i=0;i<n;i++)
	{
		cout << gold[i] << endl;
	}
*/

	for(i=0;i<q;i++)
	{
		//cout << greedy(n,ks[i],gold) << endl;
		cout << greedy2(n,ks[i],gold) << endl;
	}
	return 0;
	
}

/*
int greedy(int n, int k, long long int gold[]) //gold sorted L->R ascending
{
	int total(0);
	int l(0);
	int r=n;
	while(n>0)
	{
		total+=gold[l];
		l+=1;
		r-=k;
		if(l>=r) //set becomes empty
			{
				break;
			}
	}
	return total;
}
*/
int greedy2(int n, int k, long long int gold[])
{
	int total(0);
	int l=ceil(double(n)/double(k+1));
	for(int i=0;i<l;i++)
	{
		total+=gold[i];
	}
	return total;
}
