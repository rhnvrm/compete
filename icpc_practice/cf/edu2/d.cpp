#include "bits/stdc++.h"

using namespace std;

const double EPS = 1e-9;

typedef long long ll;
typedef long double ld;

ld toDeg(ld rad) {
  return 180.0 * rad / acos(-1);
}

ld toRad(ld deg) {
  return deg * acos(-1) / 180.0;
}

int main(){

	ios::sync_with_stdio(false);

	ld fx, fy, fr, sx,sy,sr;

	cin >> fx >> fy >>fr >> sx >> sy >>sr;

	ld d = sqrt((fx-sx) * (fx-sx) + (fy-sy)*(fy-sy));

	//no intsctn
	if (d > fr + sr - EPS) {
	    cout << 0;
	    return 0;
 	}
 	//inside
 	if (d + min(fr, sr) - EPS < max(fr, sr)) {
	    ld mr = min(fr, sr);
	    cout << fixed << setprecision(10) << mr * mr * acos(-1);
	    return 0;
  	}

  	//intsctn
  	ld f1 = 2 * acos((fr * fr - sr * sr + d * d) / (2 * fr * d));
	  ld f2 = 2 * acos((sr * sr - fr * fr + d * d) / (2 * sr * d));
	  ld s1 = (fr * fr * (f1 - sin(f1))) / 2;
	  ld s2 = (sr * sr * (f2 - sin(f2))) / 2;
	  ld total = s1 + s2;
	  cout << fixed << setprecision(10) << total;


return 0;
}