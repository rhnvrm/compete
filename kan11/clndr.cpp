#include <bits/stdc++.h>

using namespace std;

string months[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int days_leap[] = {31,29,31,30,31,30,31,31,30,31,30,31};

int convert_to_month_number(string x){
	for(int i = 0; i < 12; i++){
		if(months[i].compare(x) == 0){
			return i+1;
		}
	}
}




bool isLeap(int year){
	if ( year%400 == 0)
		return true;
	else if ( year%100 == 0)
		return false;
	else if ( year%4 == 0 )
		return true;
			
}

int main(){

	
	long long t;

	//01-JAN-1900
	string date;

	int dd,month,year;

	scanf("%lld", &t);

	while(t--){

		cin >> date;

		dd = atoi(date.substr(0, 2).c_str());
		month = 0;
		string x = date.substr(3,3).c_str();
		cout << dd << " ";
		month = convert_to_month_number(x);
		cout << month << " ";
		year = atoi(date.substr(7, 4).c_str());
		cout << year << endl;


		int sum = 0;

		if(month <= 10 && dd <= 27){
			int tmonth = month, sum=0;
			while(tmonth!=1){
				if(!isLeap(year))sum += days[tmonth];
				else sum+= days_leap[tmonth];
				tmonth--;
			}
			sum += dd;
			cout << sum << " Hundreds" << endl;
		}
		else if(month <= 12 && dd <= 25){
			if(month == 10){
				sum = dd - 27;
			}
			else if(month == 11){
				sum = dd + 3;
			}
			else{
				sum = dd + 34;
			}
			if(isLeap(year)) sum += 1;
			cout << sum << " Tens" << endl;
		}
		else if(month == 12 && dd >= 26){
			sum = dd - 26;
			if(isLeap(year)) sum += 1;
			cout << sum << " Ones" << endl;
		}

	}

	return 0;
}