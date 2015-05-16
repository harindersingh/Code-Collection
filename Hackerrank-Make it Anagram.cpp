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
    string a, b;
    int i, j, l1, l2, temp, extra, res, arr[27] = {0};
    cin >> a >> b;
    extra = res = 0;
    l1 = a.length();    
    l2 = b.length();    
    for(i = 0 ;i < 27 ; i++){
        arr[i] = 0;
    }
    for(i = 0; i < l1; i++)
    {   
        temp = a[i]-'a';
        arr[temp+1]++;
    }
    
    for(i = 0; i < l2 ;i++){
        temp = b[i]-'a';
        if(arr[temp+1] != 0)
            arr[temp+1]--;
        else
            res++;
        //cout <<b[i]<<res<<"\t";
    }
    /*cout<<"\n";
    for(i = 0 ;i < 27 ; i++){
        cout << arr[i] <<"\t";
    }
    cout<<"\n";*/
    for(i = 0; i < l1; i++)
    {   
        temp = a[i]-'a';
        if(arr[temp+1]){
            res += arr[temp+1];
            arr[temp+1] = 0;
        }
            
       // cout<<a[i] << res <<"\t";
    }

    cout << res ;
    return 0;
}