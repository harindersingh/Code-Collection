#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(true);
    long long t, n, i, arr[100005], res[100005], temp, sum;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        for(i = 0;i < n; i++){
            cin >> arr[i];
            //cout << arr[i];
        }
        //cout <<"\n";
        res[n] = res[n+1] = res[n+2] = 0;
        for(i = n-1; i >= 0; --i){
            sum += arr[i];
            temp = min(res[i+1], min(res[i+2], res[i+3]));
            res[i] = sum - temp;
            //cout << sum << "-" << temp <<"\t";
        }
        cout << res[0] <<"\n";
    }
    return 0;
}