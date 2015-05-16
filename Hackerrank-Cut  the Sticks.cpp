#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, i, j, temp, extra, res, arr[1004];
    cin >> n;
    for(i = 0;i < n ;i++)
        cin >> arr[i];
    sort(arr, arr+n);
    temp = extra = res = 0;
    for(i = 0;i < n ;i++){
        extra = arr[i];
        for(j = i;j < n; j++){
            arr[j] -= extra;
            res++;
            if(arr[j] == 0)
                temp = j;
        }
        cout << res << endl;
        res = 0;    i = temp;
    }
    return 0;
}
