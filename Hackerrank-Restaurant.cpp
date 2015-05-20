#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t, n, m, temp, res, i, extra, x;
    cin >> t;
    while(t--){
        cin >> n >> m;
        if(n < m){
            temp = n;
            x = m;
        }
        else if(n > m){
            temp = m;
            x = n;
        }
        else{
            cout << "1\n";
            continue;
        }
        extra = n*m;
        for(i = 1; i <= temp; ++i){
            if(m%i == 0 && n%i == 0){
                res = i;
            }
            if(i > x/2)
                break;
        }
        //cout << res*res <<"->";
        res = extra / (res*res);
        cout << res <<"\n";
    }
    return 0;
}
