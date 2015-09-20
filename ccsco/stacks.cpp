#include <bits/stdc++.h>

using namespace std;
 
long FIND_IND(vector<long long> &v,long long aa)
{
  long start=0,mid;
  long n=v.size();
  long end=n-1;
  long ans;
  while(start<=end)
  {
    mid=start+(end-start)/2;
    if(v[mid]==aa)
    {
      if(mid==n-1||(mid<n-1&&v[mid+1]>aa))
      {
        ans=mid+1;
        break;
      }
      else
      {
        start=mid+1;
      }
    }
    if(v[mid]>aa)
    {
      if(mid==0||(mid>0&&v[mid-1]<aa))
      {
        ans=mid;
        break;
      }
      else
      {
        end=mid-1;
      }
    }
    if(v[mid]<aa)
    {
      start=mid+1;
    }
  }
  return ans;
}
 
void UPDATE(long long aa,vector<long long> &v)
{
  long n=v.size();
  if(v[n-1]<=aa)
  {v.push_back(aa);
   return ;
  }
  long i;
  i=FIND_IND(v,aa);
  v[i]=aa;
  return;
}
 
int main() {
  // your code goes here
  int T;
  cin>>T;
  while(T--)
  {
    long n,i;
    cin>>n;
    long long array[n];
    for(i=0;i<n;i++)
    cin>>array[i];
    vector<long long> v;
      v.push_back(array[0]);
      for(i=1;i<n;i++)
      {
        UPDATE(array[i],v);
      }
      long c=v.size();
      cout<<c<<" ";
      for(i=0;i<c;i++)
      cout<<v[i]<<" ";
      cout<<"\n";
  }
  return 0;
}