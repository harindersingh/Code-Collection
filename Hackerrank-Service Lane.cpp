#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, t, i, j, diff, width[100000];
    int min;
    
    cin>>n;
    cin>>t;
    
    for(int i=0;i<n;i++)
    {
        cin>>width[i];
    }
    
    for(int mango=0;mango<t;mango++)
    {
        cin>>i>>j;
        min = 3;
        
        for(int x=i;x<=j;x++)
        {
            
            if(width[x] < min)
                min = width[x];
        }
        cout<<min<<endl;
    }
    
    return 0;
}