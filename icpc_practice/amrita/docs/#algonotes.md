Better to get off at Shornur 7am -> (Pallakad) -> Coimbatore


#algonotes


##Fermat's little theorem

If A is relati prime to N then 

```(A^(phi(N)) - A) is divisible by N```

### Euler's Totient Function

####Some Postulates of Euler totient Function-

```
phi(p) = p-1 ; if p is a prime ;
phi(p^n) = (p-1) * p^(n-1) ; still if p is a prime..
phi(a*b) = phi(a) * phi(b) whenever gcd(a,b) = 1
```

###Simple PHI

```
long long int phi(long long x)
 {
   long long int ret = 1,i,pow;
   for (i = 2; x != 1; i++) 
   {
     pow = 1;
     if(i>sqrt(x))break;
     while (!(x%i)) 
     {
       x /= i;
       pow *= i;
     }
     ret *= (pow - (pow/i));
    }
    if(x!=1)ret*=(x-1);
    return ret;
}
```


###Fast computation of PHI

```
#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;

#define N 1000000
#define MAXN 1000000
int phi[MAXN + 1], prime[MAXN/10], sz=0;
vector<bool> mark(MAXN + 1);

int main()
{
    
   phi[1] = 1; 
   for (int i = 2; i <= MAXN; i++ ){
    if(!mark[i]){
        phi[i] = i-1;
        prime[sz++]= i;
    }
    for (int j=0; j<sz && prime[j]*i <= MAXN; j++ ){
        mark[prime[j]*i]=1;
        if(i%prime[j]==0){
            int ll = 0;int xx = i;
            while(xx%prime[j]==0)
            {
                           xx/=prime[j];
                           ll++;         
                       }
            int mm = 1;
            for(int k=0;k<ll;k++)mm*=prime[j];
            phi[i*prime[j]] = phi[xx]*mm*(prime[j]-1);
            break;
    }
        else phi[i*prime[j]] = phi[i]*(prime[j]-1 );
    }
}
   int t;
   scanf("%d",&t);
   while(t--)
   {
    int n;
    scanf("%d",&n);
    printf("%d\n",phi[n]);             
   } 
   return 0;    
} 
```



## Sorting 

### sort

```sort(ALL(v));```

###overloading <

```
bool operator<(const Employee &lhs, const Employee &rhs){
    return lhs.age < rhs.age;
}
```

###library compare function

```sort(ALL(v), greater<int>());```

### Custom Less

```
struct {
    bool operator()(int a, int b)
    {
        return a < b;
    }
} customLess

sort(ALL(v), customLess);
```

### using Lambda

```
sort(ALL(v), [](int a, int b){
    return b < a;
    });

```


### partial sort

does not preserve order

```partial_sort(s.begin(), s.begin()+3, s.end());```

output: ``` 0,1,2,7,5,4,8,3,6,9 ```

### stable_sort

guarantee for preserving order

```stable_sort(ALL(v));```



##Searching

There are generally three common methods to search for an item in an array:

1. O(n) Linear Search: Consider every element from index 0 to index n − 1 (avoid
this whenever possible).

2. O(log n) Binary Search: Use lower bound, upper bound, or binary search in
C++ STL algorithm (or Java Collections.binarySearch). If the input array is
unsorted, it is necessary to sort the array at least once (using one of the O(n log n)
sorting algorithm above) before executing one (or many) Binary Search(es).

3. O(1) with Hashing: This is a useful technique to use when fast access to known
values are required. If a suitable hash function is selected, the probability of a
collision to be made is negligibly small. Still, this technique is rarely used and we
can live without it 6 for most (contest) problems.

