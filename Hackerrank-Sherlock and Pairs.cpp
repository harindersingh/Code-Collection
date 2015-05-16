#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long calcsum(long long x){
    long long sum;
    sum = x * (x+1);
    return(sum);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, i, n, arr[100005], temp;
    long long res;
    cin >> t;
    while(t--){
        res = 0;
        temp = 1;
        cin >> n;
        for(i = 0;i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(i = 1;i < n ; i++){
            if(arr[i] == arr[i-1]){
                temp++;
            }
            else{
                res += calcsum(temp-1);
                temp = 1;
            }
        }
        res += calcsum(temp-1);
        cout << res << endl;
    }
    return 0;
}
