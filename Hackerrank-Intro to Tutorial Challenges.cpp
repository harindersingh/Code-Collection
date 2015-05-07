#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[1000], value, n, loc;
    cin>>value;
    cin>>n;
    for(int i=0;i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] == value)
            loc = i;
    }
    cout<<loc;
    return 0;
}
