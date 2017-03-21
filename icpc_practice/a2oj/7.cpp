#include <bits/stdc++.h>

using namespace std;

char hello[] = "hello";

int isInHello(char x){

	for(int i = 0; i<5; i++){
		if(x==hello[i]) return i;
	}

	return -1;
}

int main(){

	int i=0, cnt=0;
    char s[105];
    scanf("%s", s);
    for(; i<strlen(s); ++i) if(s[i]=='h') {cnt++, i++; break;}
    for(; i<strlen(s); ++i) if(s[i]=='e') {cnt++, i++; break;}
    for(; i<strlen(s); ++i) if(s[i]=='l') {cnt++, i++; break;}
    for(; i<strlen(s); ++i) if(s[i]=='l') {cnt++, i++; break;}
    for(; i<strlen(s); ++i) if(s[i]=='o') {cnt++, i++; break;}
    if(cnt>=5) printf("YES");
    else printf("NO");

	return 0;
}