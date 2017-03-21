#include <iostream>
using namespace std;
 
int main() {
    long long x, c = 1;
    cin >> x;
    while (x > 1)
    {
        if (x > 1 && x % 2)
            x--, c++;
        while (x % 2 == 0)
            x /= 2;
    }
    cout << c;
}