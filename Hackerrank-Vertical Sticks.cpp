#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>
#define ll long long
#define f(i, a, b) for(i = a ; i < b; i++)
using namespace std;
/*
http://cs.stackexchange.com/questions/1076/how-to-approach-vertical-sticks-challenge
Imagine a different problem: if you had to place k sticks of equal heights in n slots then the expected distance between sticks (and the expected distance between the first stick and a notional slot 0, and the expected distance between the last stick and a notional slot n+1) is n+1/k+1 since there are k+1 gaps to fit in a length n+1.

Returning to this problem, a particular stick is interested in how many sticks (including itself) as as high or higher. If this is k, then the expected gap before it is also n+1/k+1.*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned ll t, i, n, temp, tempfreq;
    double res;
    
    cin >> t;
    while(t--){
        cin >> n;
        map <int, double> freq;
        double arr[n+1];
        f(i, 0, n) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        temp = arr[0];
        tempfreq = 0;
        f(i, 0, n) {
            if(temp != arr[i]){
                freq[temp] = n-i + tempfreq;
                temp = arr[i];
                tempfreq = 1;
            }
            else
                tempfreq++;
            if(i == n-1){
                freq[temp] = n-i-1 + tempfreq;
            }
        }
        res = 0;
        f(i, 0, n){
            //cout << "freq[" << arr[i] << "] = " << freq[arr[i]] <<"\n";
            res += (n + 1) / (freq[arr[i]] + 1); 
        }
        cout.precision(2);
        cout.setf( ios::fixed, ios::floatfield );
        cout << res << "\n";
    }
    return 0;
}
