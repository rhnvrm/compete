#include <bits/stdc++.h>

using namespace std;

#define VAL 2147483648

bitset<VAL> m;


int main(){
    //memset(m, 0, VAL + 1);
    ios::sync_with_stdio(false);

    long long q,s1,a,b;

    cin >> q >> s1 >> a >> b;

    unsigned long long sprev = 0, snow = s1, sum = 0;

    //vector<unsigned long long

    for(int i = 0; i < q; i++){
        sprev = snow;

        //cout << snow <<  ' ' << floor(snow/2) << endl;

        unsigned long long x = snow/2;

        if(snow % 2 == 0){
            //delete
            if(m[x] != 0){

                sum -= x;

            }
        }
        else{
            //odd then add
            if(m[x]==0){

                sum += x;
                m[x] = 1;
            }

        }

        snow = (a*sprev + b)%(4294967296);

    }

    cout << sum << '\n';

    return 0;
}
