#include <bits/stdc++.h>

using namespace std;


template<typename INT>
INT binary_gcd(INT  u, INT  v)
{
  INT shl = 0;

  while ( u>0 && v>0 && u!=v ) {
    // even numbers?
    bool eu = (u & 1) == 0;
    bool ev = (v & 1) == 0;

    if ( eu && ev ) {
      ++shl;
      u /= 2;
      v /= 2;
    }
    else if ( eu && !ev ) u /= 2;
    else if ( !eu && ev ) v /= 2;
    else if ( u>=v ) u = (u-v)/2;
    else {
      INT tmp = u;
      u = (v-u)/2;
      v = tmp;
    }
  }

  return u==0? v<<shl : u<<shl;
}

template<typename INT = uint64_t, size_t PRIMES = 1000000>
class prime_sieve
{
public:
  std::bitset<PRIMES> p;
  std::vector<INT> v;

  prime_sieve()
  {
    rebuild();
  }

  void rebuild()
  {
    p.reset();
    p.flip();

    p[0] = p[1] = 1;

    for ( size_t n=2; n < PRIMES; ++n )
      if ( p[n] ) {
        v.push_back(n);

        for ( size_t m=n<<1; m < PRIMES; m += n )
          p[m] = 0;
      }
  }

  inline bool isprime(const INT& n) const
  {
    return p[static_cast<size_t>(n)];
  }

  inline bool isprime_safe(const INT& n) const
  {
    return p.at(static_cast<size_t>(n));
  }

  inline size_t size() const
  {
    return v.size();
  }

  inline typename std::vector<INT>::const_iterator first() const
  {
    return v.begin();
  }

  inline typename std::vector<INT>::const_iterator last() const
  {
    return v.end();
  }

  inline typename std::vector<INT>::const_iterator find(const INT& n) const
  {
    return std::equal_range(v.begin(), v.end(), n).second;
  }
};









long long phi(const long long n)
{
  // Base case
  if ( n < 2 )
    return 0;

  // Lehmer's conjecture
  if ( isprime(n) )
    return n-1;

  // Even number?
  if ( n & 1 == 0 ) {
    long long m = n >> 1;
    return !(m & 1) ? phi(m)<<1 : phi(m);
  }

  // For all primes ...
  for ( std::vector<long long>::iterator p = primes.begin();
        p != primes.end() && *p <= n;
        ++p )
  {
    long long m = *p;
    if ( n % m  ) continue;

    // phi is multiplicative
    long long o = n/m;
    long long d = binary_gcd(m, o);
    return d==1? phi(m)*phi(o) : phi(m)*phi(o)*d/phi(d);
  }
}

int main()
{
   int tc;
   //int num = 0;
   cin >> tc;
   long long l ,r, sum = 0;
   while(tc--) {

    cin >> l >> r;
    ///long long int to_check = l;
    while (l <= r) {

        if(l%phi(l) == 0)
            sum++;
        l++;
    }
    cout << sum << endl;
    sum = 0;
   }

   return 0;

}
