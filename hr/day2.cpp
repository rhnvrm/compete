#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    double m,t,x;
    
    cin >> m >> t >> x;
    
    cout << "The final price of the meal is $" 
         << round(m + (m*t/100) + (m*x/100)) << '.'<<endl;
    
    return 0;
}