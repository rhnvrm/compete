#include "bits/stdc++.h"

using namespace std;

#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])


int lis( int arr[], int n )
{
   int *lis, i, j, max = 0;
   lis = (int*) malloc ( sizeof( int ) * n );
 
   /* Initialize LIS values for all indexes */
   for ( i = 0; i < n; i++ )
      lis[i] = 1;
    
   /* Compute optimized LIS values in bottom up manner */
   for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
            lis[i] = lis[j] + 1;
    
   /* Pick maximum of all LIS values */
   for ( i = 0; i < n; i++ )
      if ( max < lis[i] )
         max = lis[i];
 
   /* Free memory to avoid memory leak */
   free( lis );
 
   return max;
}



int main(){

	ios::sync_with_stdio(false);

	long long n;//, 
long long DP[100001], prev[100001],arr[100001];;

	cin >> n;

	for(int i = 1; i <= n; i++){

		cin >> array[i];

	}


	int maxLength = 1, bestEnd = 0;
	DP[0] = 1;
	prev[0] = -1;

	for (int i = 1; i < N; i++)
	{
	   DP[i] = 1;
	   prev[i] = -1;

	   for (int j = i - 1; j >= 0; j--)
	      if (DP[j] + 1 > DP[i] && array[j] < array[i])
	      {
	         DP[i] = DP[j] + 1;
	         prev[i] = j;
	      }

	   if (DP[i] > maxLength)
	   {
	      bestEnd = i;
	      maxLength = DP[i];
	   }
	}


	cout << ARRAY_SIZE(prev) - maxLength;

//	int s = sizeof(arr)/sizeof(arr[0]);



	return 0;
}