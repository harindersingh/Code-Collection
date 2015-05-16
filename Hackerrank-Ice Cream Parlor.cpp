#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int t, m, n, arr[10004], temp, i, posa, posb;
    map <int, int> h;
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(i = 0;i < n; i++){
            cin >> arr[i];
            h[arr[i]] = 1;
        }
        posa = posb = 0;
        for(i = 0;i < n; i++){
            temp = m - arr[i];
            if(h[temp] == 1){
                posa = i;
                for(int j = i+1; j < n; j++){
                    if(arr[j] == temp){
                        posb = j;   break;
                    }
                }
            }
            if(posb > 0)
                break;
        }
        cout << posa+1 << " " << posb+1 << endl;
    }
    return 0;
}
