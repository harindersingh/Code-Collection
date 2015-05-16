#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n,k,arr[100000],sum=0,count=0;
    cin>>n>>k;
    for(i = 0;i < n; i++)
    {
        cin>>arr[i];
    }
    std::sort(arr, arr+n);                //special thing here
    for(i = 0;i < n; i++)
    {
        sum += arr[i];
        count++;
        if(sum <= k)
            continue;
        else
        {
            sum = sum - arr[i];
            count--;
        }
    }
    cout<<count;
    return 0;
}
