#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int arr[101], brr[101], a, b, i, j, l1, l2, temp, k, ex;
    cin >> a >> b;
    for(i = 0;i < a; i++)
        cin >> arr[i];
    
    for(j = 0;j < b; j++)
        cin >> brr[j];
    l1 = a+1;   l2 = b+1;
    //cout << l1 << "\t" << l2 <<"\n";
    int c[l1][l2];
    for(i = 0; i < l1; i++)
        c[i][0] = 0;
    for(i = 0; i < l2; i++)
        c[0][i] = 0;
    for(i = 1; i < l1; i++){
        for(j = 1; j < l2; j++){
            if(arr[i-1] == brr[j-1])
                c[i][j] = c[i-1][j-1] + 1;
            else
                c[i][j] = max(c[i][j-1], c[i-1][j]);
        }
    }
    
    temp = k = ex = c[l1-1][l2-1];
    int res[temp];
    /*for(i = 0; i < l1; i++){
        for(j = 0; j < l2; j++){
            cout <<c[i][j]<<"\t";
        }
        cout <<endl;
    }*/
    
    for(i = l1-1; i > 0; i--){
        for(j = l2-1; j > 0; j--){
            if((arr[i-1] == brr[j-1]) && c[i][j] == ex){
                res[--temp]= arr[i-1];    //cout <<"yo" << i-1 <<"-"<<j-1 << " ";
                i = i-1;  
                ex--;
            }
        }
    }
    for(i = 0;i < k; i++)
        cout << res[i] << " ";
    
    return 0;
}