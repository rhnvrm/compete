#include <bits/stdc++.h>

using namespace std;

int find_total(long long int arr[],int n)
{
    int sum=0,i;
    for(i=0;i<=n;i++)
        sum=sum+arr[i];
        return sum;
}

void BubbleSort(long long int arr[],int n,int q)
 {
     /*int c,d,swa,sum=0,uu;
       for (c = 0 ; c < ( n - 1 ); c++)
       {
       for (d = 0 ; d < n - c - 1; d++)
      {
      if (arr[d] >arr[d+1]) 
      {
        swa       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swa;
      }
    }
  }*/
    long long sum = 0, uu;
    sort(&arr[0],&arr[n]);

       for(uu=0;uu<n;uu++)
       {
           sum=sum+arr[uu];
           n=n-q;
       }
       cout<<sum;
}
int main()
{
    long long n,i,k,q=0,arr2[100000],j=0,o,total=0;
    long long arr1[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    cin>>q;
    cin.clear();
    for(o=0;o<q;o++)
    {
     cin>>arr2[o];
    }
     for(j=0;j<q;j++)
     {
        if(arr2[j]==0)
             {
                total=find_total(arr1,n);
                cout<<total<<endl;
             }
             else
             {
             BubbleSort(&arr1[0],n,q);
             }
         }
     }
