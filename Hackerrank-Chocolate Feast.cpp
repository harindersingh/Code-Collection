#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int test, money, price, wrappers, total_chocolates, chocolates, extra;
    cin>>test;
    while(test--)
    {
        cin>>money>>price>>wrappers;
        total_chocolates = money/price;
        extra = total_chocolates;
        
        while(extra/wrappers)
        {
            chocolates = extra/wrappers;
            extra = extra%wrappers + chocolates;
            total_chocolates += chocolates;
        }
        cout<<total_chocolates<<"\n";
    }
    return 0;
}
