#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#define ll long long
#define f(i, a, b) for(i = a; i < b; i++)
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ll t, i, j, m, temp, n, k, arr[2001];
    cin >> t;
    while(t--){
        cin >> n >> k;
        f(i, 0, n){
            cin >> arr[i];
        }
        ll table[k+1] = {0};
        table[0] = 0;
        f(i, 1, k+1){
            temp = INT_MIN;
            f(j, 0, n){
                if(arr[j] <= i){
                    temp = max(temp, table[i - arr[j]] + arr[j]);
                }    
            }
            if(temp != INT_MIN)
                table[i] = temp;
            else
                table[i] = table[i-1];
            /*f(m, 0, i+1){
                cout << table[m] <<"\t";
            }
            cout << "\n";*/
        }
        cout << table[k] << "\n";
    }
    return 0;
}
