#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long t, n, res;
    cin >> t;
    while(t--){
        cin >> n;
        if(n < 3)
            cout << "-1" << "\n" ;
        else {
            if(n % 2 != 0)
                cout << "2\n";
            else{
                if(n % 4 == 0)
                    cout << "3\n";
                else
                    cout << "4\n";
            }
        }
               
    }
    return 0;
}
