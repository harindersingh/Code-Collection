#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, i, n, arr[105];
    long long res;
    cin >> t;
    while(t--){
        cin >> n;
        res = 1;
        for(i = 0;i < n-1; i++){
            cin >> arr[i];
            res *= arr[i];
            if(res > 1234567)
                res = res % 1234567;
        }
        cout << res << endl;
        
    }
    return 0;
}
