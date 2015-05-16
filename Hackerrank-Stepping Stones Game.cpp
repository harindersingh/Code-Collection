#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned long long t, n, i, temp, extra, flag;
    cin >> t;
    while(t--){
        cin >> n;
        temp = 8*n + 1;
        extra = sqrt(temp);
        if((extra*extra) == temp)
            flag = 1;
        else
            flag = 0;
        if(flag){
            i = (extra - 1) / 2;
            cout << "Go On Bob " << i << "\n";
        }  
        else
            cout << "Better Luck Next Time\n";
    }
    return 0;
}
