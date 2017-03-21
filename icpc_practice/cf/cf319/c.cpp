#include <bits/stdc++.h>

using namespace std;

bool * SieveOfEratosthenes(int number)
{
    bool * primes = new bool[number+1];
    for(int i=0;i<=number;i++)
        primes[i] = true;
    
    primes[1] = false;
    int squareRoot = sqrt(number);
    for(int i=2;i<=squareRoot;i++)
    {
        if(primes[i])
        {
            for(int j=2*i;j<=number; j += i)
                primes[j] = false;
        }
    }
    return primes;
}

int main(){

	long long n;

	cin >> n;

	bool * primes;
    primes = SieveOfEratosthenes(n);


    vector<int> ans;
    for (int i = 1; i <= n; i++) {
            if (primes[i]) {
        int q = 1;
        while (q <= n / i) {
            q *= i;
            ans.push_back(q);
        }
            }
    }
    cout << ((int) (ans).size()) << endl;
    for (int i : ans) {
        printf("%d ", i);
    }
    printf("\n");

	return 0;
}