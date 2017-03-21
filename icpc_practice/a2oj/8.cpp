#include <bits/stdc++.h>

using namespace std;

int lucky(int x){
    while(x){
        int t = x%10;
        if(t == 4 || t == 7){
            x/=10;
        }
        else{
            return false;
        }
    }

    return true;

}

bool almost_lucky(int n)
{
    if (lucky(n))
    {
        return true;
    }

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0 && (lucky(i) || lucky(n / i)))
        {
            return true;
        }
    }

    return false;
}

int main(){

    int n;

    cin >> n;

    if(almost_lucky(n)){
        cout << "YES\n";
        return 0;
    }
    else{
        cout << "NO\n";
    }


	return 0;
}