#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i, j, len, n, x, y, res, flag;
    string str, str2;
    cin >> n;
    while(n--){
        cin >> str;
        len = str.length();
        res = -1; flag = 0;
        for(i = 0 ;i < len ; i++)
        {
            if(str[i] != str[len-i-1]){
                res = i;
                for(j = i+1 ; j < len ; j++){
                    if((len-j-1)==i)  { flag=1; break;}
                    if(str[j] != str[len-j]){
                        //cout<<str[j] << "\t" << str[len-j-1] << endl;   
                        res = len - 1 - i;
                        flag=1; break;
                    }
                }
                if(flag) break;
            }
        }
        cout << res << endl;
        
    }
    
    return 0;
}
