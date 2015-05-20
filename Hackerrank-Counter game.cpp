#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned long long int t, n, i, temp, cntr, flag;
    map<unsigned long long int, int> x;
    for(i = 1; i <= 64; i++){
        temp = pow(2,i);
        x[temp] = 1;
    }
    cin >> t;
    while(t--){
        cin >> n;
        cntr = 0; flag = 0;
        if(n == 1){
            cout << "Richard\n";
            continue;
        }
        while(1){
            if(x[n] == 1){
                n = n/2;
                cntr++;
            }
            else{
                for(i = 64; i >= 1; i--){
                    temp = pow(2,i);
                    if(temp < n){
                        n = n - temp;
                        cntr++;
                    }
                }
            }
            if(n == 1){
                if(cntr % 2 == 0){
                    cout << "Richard\n";
                    break;
                }
                else{
                    cout << "Louise\n";
                    break;
                }
            }
        }
    }
    return 0;
}