#include <iostream>
#include <string.h>
#include <stdio.h>
 
using namespace std;
 
#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])

long long int CeilIndex(long long int A[], long long int l, long long int r, long long int key) {
    long long int m;
 	
    while( r - l > 1 ) {
        m = l + (r - l)/2;        
        (A[m] >= key ? r : l) = m;
    }
 	//cout << key << "\t" << r <<"\n";
    return r;
}


 
int main() {
 long long t, A, res;
 long long int tailTable[10000];
 long long int len; 

 cin >> t;
 for(int i = 0;i < t ; i++){
    cin >> A;
    if(i == 0){
    	tailTable[0] = A;
		len = 1;  
    }
    else{
    	if( A < tailTable[0] )
            tailTable[0] = A;
        else if( A > tailTable[len-1] )
            tailTable[len++] = A;
        else
            tailTable[CeilIndex(tailTable, -1, len-1, A)] = A;
    }
}

    cout << len;
    return 0;
}