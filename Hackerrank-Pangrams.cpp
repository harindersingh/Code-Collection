#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, temp, len, arr[28];
    string str;
    getline(cin, str);
    len = str.length();
    //cout << len << "\n";
    for(i = 0 ;i < 28 ; i++){
        arr[i] = 0;
    }
    for(i = 0; i < len; i++)
    {   
        if(str[i] == ' ')   
            continue;
        temp = str[i]-'a';
        if(temp < 0)
            temp = str[i] - 'A';
        //cout << temp<<"\t";
        arr[temp+1] = 1;
    }
    //cout<<"\n";
    for(i = 1; i < 27; i++){
        //cout<<arr[i]<<"\t";
        if(!arr[i]){
            cout << "not pangram" ;
            return 0;
        }
    }
    cout << "pangram";
    return 0;
}
