#include "bits/stdc++.h"

using namespace std;

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main(){

	ios::sync_with_stdio(false);

	vector<string> v ; //Use vector to add the words

	string str;

	cin >> str;

    size_t prev_pos = 0, pos;
    while ((pos = str.find_first_of(",;", prev_pos)) != string::npos)
    {
        if (pos > prev_pos)
            v.push_back(str.substr(prev_pos, pos-prev_pos));
        prev_pos= pos+1;
    }
    if (prev_pos< str.length())
        v.push_back(str.substr(prev_pos, string::npos));

    vector<string> a,b;

    for (std::vector<string>::iterator i = v.begin(); i != v.end(); ++i)
    {
    	if(is_number(*i)){
    		a.push_back(*i);
    	}
    	else{
    		b.push_back(*i);
    	}
    }

    string A,B;

    if(a.size() != 0)
    for (std::vector<string>::iterator i = a.begin(); i != a.end(); ++i)
    {
    	
    }
    else
    	A = "-";

    if(b.size() != 0)
    for (std::vector<string>::iterator i = a.begin(); i != a.end(); ++i)
    {
    	
    }
    else
    	B = "-";

    cout << "\"" << A << "\"\n";
    cout << "\"" << B << "\"\n";

	return 0;
}