#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i, n, k, q, pos, temp, arr[100005], query;
    cin >> n >> k >> q;
    for(i = 0;i < n; i++){
        cin >> arr[i];
    }
    k = k % n;
    for(i = 0;i < q; i++){
        cin >> query;
        pos = n-k+query;
        if(pos >= n)
            pos = pos%n;
        cout << arr[pos] << endl;
    }
    
    return 0;
}
