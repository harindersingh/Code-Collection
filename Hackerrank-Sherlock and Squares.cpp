#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t, a, b, temp1, i, temp2, res;
    cin >> t;
    while(t--){
        cin >> a >> b;
        res = 0;
        temp1 = sqrt(a);
        temp2 = sqrt(b);
        for(i = temp1; i <= temp2; i++){
            if((i*i) >= a && (i*i) <= b)
                res++;
        }
        cout << res <<"\n";
    }
    return 0;
}
