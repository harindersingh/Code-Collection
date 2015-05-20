#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, t, n, arr[50005], bigger[50005], temp, no_shares;
    long long res;
    cin >> t;
    while(t--){
        cin >> n;
        no_shares = res = 0;
        for(i = 0;i < n; ++i){
            cin >> arr[i];
        }
        temp = 0;
        for(i = n-1;i >= 0; --i){
            temp = max(temp, arr[i]);
            res += temp - arr[i];
        }
        /*for(i = 0;i < n; ++i){
            cout << bigger[i] <<"\t";
        }
        cout << "\n";*/
        cout << res <<"\n";
    }
    return 0;
}
