#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t, a, arr[100002], max_so_far, i, curr_max, smax;
    cin >> t;
    while(t--){
        cin >> a;
        for(i = 0;i < a; i++){
            cin >> arr[i];
        }
        max_so_far = curr_max = arr[0];
        smax = 0;
        if(arr[0] > 0)
            smax += arr[0];
        
        for(i = 1; i < a; i++){
            curr_max = max(arr[i], curr_max+arr[i]);
            max_so_far = max(max_so_far, curr_max);
            if(arr[i] > 0)
                smax += arr[i];
        }
        if(smax == 0)
            smax = max_so_far;
        cout << max_so_far << " " << smax << "\n";
        
    }
    return 0;
}
