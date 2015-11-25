#include <bits/stdc++.h>


#define N 1000000
#define MAXN 1000000000
long long phi[MAXN + 1], prime[MAXN/10], sz=0;
vector<bool> mark(MAXN + 1);

int main()
{
    
   phi[1] = 1; 
   for (long long i = 2; i <= MAXN; i++ ){
	    if(!mark[i]){
	        phi[i] = i-1;
	        prime[sz++]= i;
	    }
	    for (long long j=0; j<sz && prime[j]*i <= MAXN; j++ ){
	        mark[prime[j]*i]=1;
	        if(i%prime[j]==0){
	            long long ll = 0;long long xx = i;
	            while(xx%prime[j]==0)
	            {
	                           xx/=prime[j];
	                           ll++;         
	                       }
	            long long mm = 1;
	            for(long long k=0;k<ll;k++)mm*=prime[j];
	            phi[i*prime[j]] = phi[xx]*mm*(prime[j]-1);
	            break;
   			}
	        else 
	        	phi[i*prime[j]] = phi[i]*(prime[j]-1 );
	    }
	}
   long long t;
   scanf("%lld",&t);
   while(t--)
   {
    long long n,l,r,sum = 0;
    scanf("%lld %lld", &l, &r);
    for(int i = l; i <= r; i++){
		if(i%phi[n] == 0) {
			sum++;
		}
    }
    printf("%lld\n",sum);      
   } 
   return 0;    
} 

