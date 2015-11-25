#include "bits/stdc++.h"

using namespace std;

int ar[3100], dar[3100], n;

bool jolly() {
    for(int i = 0; i < n - 1; i++)
        dar[i] = abs(ar[i + 1] - ar[i]);
    sort(dar, dar + n - 1);
    for(int i = 0; i < n - 1; i++)
        if(dar[i] != i + 1) {
            printf("Not jolly\n");
            return false;
        }
    printf("Jolly\n");
    return true;
}

int main() {
    while(scanf("%d", &n) == 1) {
        for(int i = 0; i < n; i++)
            scanf("%d", &ar[i]);
        jolly();
    }
}