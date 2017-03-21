/*
2
3 2
piygu ezyfo rzotm
1 piygu
6 tefwz tefwz piygu ezyfo tefwz piygu
4 1
kssdy tjzhy ljzym kegqz
4 kegqz kegqz kegqz vxvyj
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long t,n,k,l, tint;

	cin >> t;

	while(t--){

		vector<string> old_lang;

		cin >> n >> k;

		for(int i = 0; i < n; i++)
		{
			string temp;
			cin >> temp;
			old_lang.push_back(temp);
		}

		long long length;
		vector<string> new_lang;

		for(int i = 0; i < k; i++){


			cin >> length;

			for (int l = 0; l < length; ++l)
			{
				string temp;
				cin >> temp;
				new_lang.push_back(temp);

			}


		}

		/*for (std::vector<string>::iterator i = new_lang.begin(); i != new_lang.end(); ++i)
		{
			cout << *i;	
		}*/

		for (vector<string>::iterator o = old_lang.begin(); o != old_lang.end(); ++o)
		{
			int found = 0;
			for (vector<string>::iterator j = new_lang.begin(); j != new_lang.end(); ++j)
			{
				//cout << *o << *j << endl;
				if(*o == *j){
					cout << "YES ";
					found = 1;
					break;
				}
			}
			if(!found)cout << "NO ";
		}
		cout << "\n";
	}



	return 0;
}