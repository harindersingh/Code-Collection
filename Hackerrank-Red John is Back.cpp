#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long t, n, i, j, arr[44], temp;
    cin >> t;
    for(i = 1; i <= 41; i++){
        if(i == 1 || i == 2 || i == 3)
            arr[i] = 1;
        else if(i == 4)
            arr[i] = 2;
        else
            arr[i] = arr[i-1] + arr[i-4];
    }            
    //max arr[41] = 299915
    //cout << arr[41] << "\n";
    bool isprime[299915];
    for(i = 0;i <= arr[41]; i++) 
        isprime[i]=true;
    for(i = 4;i <= arr[41]; i+=2)
        isprime[i]=false;
    for(i = 3;i <= sqrt(arr[41]); ++i){
        for(j = i;j*i <= arr[41]; ++j)
            isprime[j*i] = false;
    }
    int res[299915];
    res[0] = res[1] = 0;
    res[2] = 1;
    for(i = 3;i <= arr[41]; ++i){
        res[i] = res[i-1];
        if(isprime[i])
            res[i]++;
        //cout << i << "-" << res[i] <<"\t";
    }    
    while(t--){
        cin >> n;
        temp = arr[n];
        //cout << temp <<"->" << res[temp] << "\n";
        cout << res[temp] << "\n";
    }
    return 0;
}
