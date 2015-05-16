#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int i, j, a, b, res, max = 0;
    cin >> a >> b;
    for(i = a;i <= b; i++)
    {
        for(j = a;j <= b;j++)
        {
            res = i ^ j;
           // cout << res << "\t";
            if(res > max)
                max = res;
        }
    }
    cout << max;
    return 0;
}
