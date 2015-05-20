#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n, m, i, j, temp, x, y;
    vector<long long> s;
    cin >> n >> m;
    for(i = 0;i < m; i++){
        cin >> temp;
        s.push_back(temp);
    }
    long long table[n+1][m];
    for(i = 0; i < m; i++)
        table[0][i] = 1;
    for(i = 1; i <= n; ++i){
        for(j = 0;j < m; j++){
            x = (i-s[j] >= 0)? table[i-s[j]][j]: 0;
            y = (j >= 1)? table[i][j-1]: 0;
            table[i][j] = x + y;
        }
    }
    /*for(i = 0;i <= n; i++){
        for(j = 0;j < m; j++){
            cout << table[i][j] <<"\t";
        }
        cout << "\n";
    }*/
    cout << table[n][m-1];
    return 0;
}
