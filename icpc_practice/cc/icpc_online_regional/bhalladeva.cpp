#include<bits/stdc++.h>

using namespace std;


int main() {
    long long n;
    cin >> n;
    long long temp;
    vector<long long int> v;
    for(long long i = 0 ; i < n ; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    long long q;
    cin >> q;
    long long answer;

    while(q--) {
        long long k;
        cin >>k;
        answer = 0;
        long long end = v.size()-1;
        long long i = 0;
        int l=ceil(double(n)/double(k+1));
        for(int i=0;i<l;i++)
        {
            answer += v[i];
        }
        cout << answer << endl;

    }
}
