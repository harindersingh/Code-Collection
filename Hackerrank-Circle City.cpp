#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//just find how many lattice points lie on the circle in first quadrant n then (*4) 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, r, k, count, i, temp1, temp2;
    cin >> t;
    while(t--){
        cin >> r >> k;
        count = 0;
        for(i = 0;i < ceil(sqrt(r)); i++){
            temp1 = sqrt(r - i*i);
            if((temp1*temp1) == (r-(i*i)))
               count += 4;              
        }
        //cout << count <<"-" << k << "\t";
        if(count > k)
            cout << "impossible\n";
        else
            cout << "possible\n";
    }
    return 0;
}