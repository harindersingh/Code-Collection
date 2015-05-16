#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i, j, key, n, arr[1000];
    cin>>n;
    for(i = 0; i < n; i++)
        cin>>arr[i];
    
    for (j = 1; j < n; j++)
    {
        key = arr[j];
            for (i = j-1; (i>=0) && (arr[i]>key); i--)
            {
                arr[i+1]= arr[i];
            }
        //cout<<i+1<<"\n";
        arr[i+1]=key;
        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
