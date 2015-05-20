#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll unsigned long long

#define MOD7 1000000007
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string str;
    cin >> str;
    /*
    5 | 3 53 | 1 31 531 | 2 12 312 5312
    S = sd[0] + sd[1] + sd[2] + sd[3] 
    sd[i+1] = (i + 2) * N[i] + 10 * sd[i]
    sd[0] = N[0]
    */
    ll res, temp, n, i;
    n = str.length();
    res = str[0] - '0';
    temp = res;
    for(i = 1;i < n; ++i){
        temp = (i+1) * (str[i]-'0')  + 10*temp;
        temp %= MOD7;
        res = (res + temp) % MOD7;
    }
    cout << res;
    return 0;
}
