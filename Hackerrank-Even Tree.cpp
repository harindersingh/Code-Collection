#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[101][2], childcnt[101];
    int i, n, m, res = 0;
    cin >> n >> m;
    for(i = 0;i < m; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    for(i = 1;i <= n; i++)
        childcnt[i] = 1;
    for(i = m-1;i >= 0; i--){
        if(arr[i][1]) 
            childcnt[arr[i][1]] += childcnt[arr[i][0]];
    }
    for(i = 1;i <= n; i++){
        if((childcnt[i] % 2) == 0 && i != 1)
            res++;
        //cout << i << "-" << childcnt[i] << "\t";
    }
    cout << res;
    return 0;
}
