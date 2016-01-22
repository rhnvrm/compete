#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    long long t,a,x;
    
    cin >> t;
    
    while(t--){
        
            cin >> a;
            auto x= bitset<32>(a).to_string();
            cout << x.substr(((x).find('1'))) << endl;
            
        
    }
    
    return 0;
}
