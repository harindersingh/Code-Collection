#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,temp;
    long int min;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    min = arr[1] - arr[0];
    for(int i = 1;i < n; i++)
    {
        temp = arr[i] - arr[i-1];
        if(temp < min)
            min = temp;
    }    
    //cout<<min<<endl;
    for(int i = 1;i < n; i++)
    {
        temp = arr[i] - arr[i-1];
        if(temp == min)
            cout << arr[i-1] << " "<<arr[i] <<" ";
    }
    return 0;
}
