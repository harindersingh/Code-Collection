#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MOD 1000000007

long long int expn(long long int N, long long int K)
{
    if(K==0) return 1;
    if(K==1) return N%MOD;
    if(K%2 ==0)
    {
        long long int temp = expn(N,K/2);
        return (temp*temp)%MOD;
    }
    else
    {
        long long int temp = expn(N,K/2);
        temp = (temp*temp)%MOD;
        return (temp*N)%MOD;
    }
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT  */
    int i, j, t;
    cin>>t;
    string a, b;
    int arr[100009], brr[100009];
    while(t--)
    {
        long long int M = 1000000007;
        long long int N = 1000000006;
        long long int temp1, temp2;
        cin>>a>>b;
        for(i = 0; i < a.length(); i++)
        {
            arr[i] = a[i] - '0';
        }
        for(j = 0; j < b.length(); j++)
        {
            brr[j] = b[j] - '0';
        }
        
        temp1 = arr[0] % M;
        for(i=1 ; i< a.length() ; i++)
        {
            temp1 = (10*temp1 + arr[i] )% M; 
        }

        temp2 = brr[0] % N;
        for(j=1 ; j< b.length() ; j++)
        {
            temp2 = (10*temp2 + brr[j] )% N; 
        }
         
        cout<<expn(temp1,temp2)<<endl;
        
    }
    return 0;
}
