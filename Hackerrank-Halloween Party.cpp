#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t, k;
    long long int temp, res;
    cin >> t;
    while(t--){
        cin >> k;
        if(k % 2 == 0){
            temp = k / 2;
            res = temp * temp;
        }
        else{
            temp = k/2;
            res = temp * (temp+1);
        }
        cout << res << "\n";
    }
    return 0;
}