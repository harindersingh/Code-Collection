#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

map<int, int> isfibo;

int main() {
    int T;
    scanf("%d", &T);
    
    long long a = 0;
    long long b = 1;
    long long c;
    while (true) {
        c = a + b;
        if (c > 10000000000) break;
        isfibo[c] = 1;
        a = b;
        b = c;
    }
    
    long long n;
    while (T--) {
        scanf("%lld", &n);
        
        if (isfibo[n]) printf("IsFibo\n");
        else printf("IsNotFibo\n");
    }
    return 0;
}