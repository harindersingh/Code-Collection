#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i, j, t, key, arr[100000], count;
    //cin>>n;
    //while(n--)
    //{
        cin>>t;
        count = 0;
        for(i = 0; i < t; i++)
            cin>>arr[i];
        
        for (j = 1; j < t; j++)
        {
            key = arr[j];
                for (i = j-1; (i>=0) && (arr[i]>key); i--)
                {
                    arr[i+1]= arr[i];
                    count++;
                }
            arr[i+1]=key;
            
        }
        cout<<count<<"\n";
    //} 
    return 0;
}