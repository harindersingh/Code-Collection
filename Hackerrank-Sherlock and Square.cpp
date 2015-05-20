#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long t, n, i, res, temp;
    cin >> t;
    while(t--){
        cin >> n;
        n += 1;
        res = 1;
        temp = 2;
        while(n){
            if(n & 1)
                res = (res*temp) % 1000000007;
            temp = (temp*temp) % 1000000007;
            n >>= 1;
        } 
        res = (res+2) % 1000000007;
        cout << res <<endl;
    }
    return 0;
}
