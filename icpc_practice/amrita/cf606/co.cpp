#include "bits/stdc++.h"

using namespace std;

#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])
 
// Binary search (note boundaries in the caller)
// A[] is ceilIndex in the caller
int CeilIndex(int A[], int l, int r, int key)
{
    while (r - l > 1)
    {
        int m = l + (r - l)/2;
        if (A[m]>=key)
            r = m;
        else
            l = m;
    }
    return r;
}
 
int lis(int A[], int size)
{
    // Add boundary case, when array size is one
 
    int *tailTable   = new int[size];
    int len; // always points empty slot
 
    memset(tailTable, 0, sizeof(tailTable[0])*size);
 
    tailTable[0] = A[0];
    len = 1;
    for (int i = 1; i < size; i++)
    {
        if (A[i] < tailTable[0])
            // new smallest value
            tailTable[0] = A[i];
 
        else if (A[i] > tailTable[len-1])
            // A[i] wants to extend largest subsequence
            tailTable[len++] = A[i];
 
        else
            // A[i] wants to be current end candidate of an existing
            // subsequence. It will replace ceil value in tailTable
            tailTable[CeilIndex(tailTable, -1, len-1, A[i])] = A[i];
    }
 
    delete[] tailTable;
    return len;
}
 


int main(){

	ios::sync_with_stdio(false);

	int n, arr[100001];

	cin >> n;

	for(int i = 1; i <= n; i++){

		cin >> arr[i];

	}


	cout << n - lis(arr, n);

//	int s = sizeof(arr)/sizeof(arr[0]);



	return 0;
}