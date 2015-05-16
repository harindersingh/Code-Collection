#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

/* Tail starts here */
int main(void) {
    int i,n,arr[1000],var;
    cin>>n;
    for(i = 0;i < n; i++)
    {
        cin>>arr[i];
    }
    var = arr[n-1];
    //cout<<var;
    for(i = n-1;i >= 0; i--)
    {
        if(var<arr[i-1])
        {
            arr[i] = arr[i-1];
            for(int j = 0; j < n; j++)
                cout<<arr[j]<<" ";
            cout<<"\n";
        }
        else if(var > arr[i-1])
        {
            arr[i] = var;    
            for(int j = 0; j < n; j++)
                cout<<arr[j]<<" ";
            break;
        }
    }
    
  return 0;
}