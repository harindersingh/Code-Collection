#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n, temp, x, extra, arr[100005], i;
    cin >> n;
    vector<long long > dp;
    for(i = 0;i < n; ++i){
        dp.push_back(1);
    }
    for(i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(i = 1;i < n; ++i){
        if(arr[i] > arr[i-1])
            dp[i] = dp[i-1] + 1;
    }
    for(i = n-1; i >=0 ; --i){
        if(arr[i] > arr[i+1])
            dp[i] = max(dp[i+1]+1, dp[i]);
    }
    
    temp = accumulate(dp.begin(), dp.end(), 0);
    cout << temp ;
    return 0;
}