#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,t,n,res;
    
    cin>>t;
    
    for(i=0;i<t;i++)
    {
        res = 0;
        cin>>n;
        for(j=0;j<=n;j++)
        {
            if(j%2==0)
                res+=1;
            else
                res*=2;
        }
        cout<<res<<endl;
        
    }
    return 0;
}
