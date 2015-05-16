#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    long long int sum = 2;
    cin>>t;
    while(t--)
    {
        
        sum=2;
        cin>>n;
        for(int j=1;j<n;j++)
        {
            sum = sum * 2;
            sum = sum % 100000;
            
        }
        cout<<sum-1<<endl;
    }
    return 0;
}