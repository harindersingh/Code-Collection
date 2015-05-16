#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t, px, py, qx, qy, rx, ry, difx, dify;
    cin >> t;
    while(t--){
        cin >> px >> py >> qx >> qy;
        difx = (qx - px);
        dify = (qy - py);
        rx = qx + difx;
        ry = qy + dify;
        cout << rx << " " << ry  << endl;
    }
        return 0;
}
