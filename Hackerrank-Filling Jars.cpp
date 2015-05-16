#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int N,M;
    long long int i,a,b,k;
    cin >> N >> M;
    long long int sum1 = 0;
    for(i=0 ; i< M ; i++)
    {
            cin>>a;
            cin>>b;
            cin>>k;
            sum1 += (b-a+1)*k;            
    }
    cout<<sum1/N<<endl;
    return 0;
}