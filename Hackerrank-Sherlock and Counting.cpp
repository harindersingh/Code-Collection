#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long i, t, n, k; 
    long double alpha, beta, dis;
    long long temp, res;
    
    cin >> t;
    while(t--){
        res = 0;
        cin >> n >> k;
        dis = (n*n) - (4*n*k);
        alpha = ( n - sqrt((n*n) - (4*n*k))) / 2;
        beta = ( n + sqrt((n*n) - (4*n*k))) / 2;
        //cout << dis <<"\t";
        if(dis < 1){
            res = n-1;
        }
        else{
            if(alpha > 0)
            res += (alpha);
            res += (n - ceil(beta));    
        }
        cout << res << "\n";
    }
    return 0;
}
