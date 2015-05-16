#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t, n, i, arr[100002], flag;
    long long res, temp;
    cin >> t;
    while(t--){
        res = temp = flag = 0;
        cin >> n;
        for(i = 0; i <n; i++){
            cin >> arr[i];
            res += arr[i];
        }
        for(i = 1; i <n-1; i++){
            temp += arr[i-1];
            if(temp == (res-arr[i]-temp))
            {
                flag=1;break;    
            }
        }
        if(flag)    cout << "YES\n";
        else    if(n == 1)        cout << "YES\n";
                else              cout << "NO\n";
    }
    return 0;
}
