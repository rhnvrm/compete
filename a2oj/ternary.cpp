#include <bits/stdc++.h>

using namespace std;


string toT(string x){

    string y = "";

    unsigned long long num = ans.

    while()

    y.push_back();


    return y;
}


string tor(string x, string y)
{
    rx = reverse(x.begin(),x.end());
    ry = reverse(y.begin(),y.end());

    int append = x.length() - y.length();

    unsigned long long m = max(x.length(), y.length());

    if(append > 0){
        while(append){
            y.append('0');
            append--;
        }
    }
    else if(append < 0){
        while(append){
            x.append('0');
            append--;
        }
    }

    string result;

    for(int i = 0; i < m; i++){

        int x = rx[i] - '0';
        int y = ry[i] - '0';

        result.append((char)((x+y)%3 + '0'));
    }

    result = reverse(result.begin(), result.end());
    return result;
}

int main(){

    
    unsigned long long tor;
    unsigned long long int x,y;

    cin >> x >> y;

    string ans = tor(toT(x), toT(y));

    //cout << a << endl << b;

    cout << strtoull(ans.c_str(),3) << endl;

    //b = c^a

    return 0;
}