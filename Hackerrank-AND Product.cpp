#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map <long long,long long> yo, x;
    long long t, a, b, i, temp, tempa, tempb;
    cin >> t;
    while(t--){
        cin >> a >> b;
        temp = 1ll;
        while(a != b)
        {
            a /= 2; b /= 2; temp *= 2;
        }
        cout << a*temp << endl;
    }
    return 0;
}
