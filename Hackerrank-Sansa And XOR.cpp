#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i, j, t, n, arr[100005], res, temp;
    cin >> t;
    while(t--){
        cin >> n;
        res = temp = 0;
        for(i = 0;i < n; i++){
            cin >> arr[i];
        }
        if(n % 2 == 0){
            res = 0;
        }
        else{
            for(i = 0;i < n; i+=2){
                res ^= arr[i];
                //cout << res <<"\t";
            }
        }
        cout << res <<"\n";
    }
    return 0;
}
