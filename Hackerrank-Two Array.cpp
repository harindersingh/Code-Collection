#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t, n, k, arr[1002], brr[1002], i, res;
    cin >> t;
    while(t--){
        cin >> n >> k;
        res = 0;
        for(i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
  
        for(i = 0; i < n; i++){
            cin >> brr[i];
        }
        sort(brr, brr+n);
        for(i = 0; i < n; i++){
            if(arr[i]+brr[n-i-1] >= k)
                res = 1;
            else{
                res = 0;
                break;
            }
        }
        if(res)
            cout <<"YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
