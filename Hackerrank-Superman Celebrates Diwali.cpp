#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector< vector<int> > arr;
    //map<int, int> peopleonfloor[1905];
    int h, n, jump, j, k, people, tempp, tempn, maxonfloor[1905];
    scanf("%d %d %d", &n, &h, &jump);
    for(k = 0; k < h; k++){
        vector<int> row; // Create an empty row
        for (j = 0; j < n; j++) {
            row.push_back(0); // Add an element (column) to the row
            //cout << row[j] <<"\t";
        }
        arr.push_back(row); // Add the row to the main vector
        //cout <<"\n";
    }
    tempn = n;
    for(k = 0; k < tempn; k++){
        scanf("%d", &people);
        for(j = 0;j < people; j++){
            scanf("%d", &tempp);
            //peopleonfloor[k][h - tempp]++;
            arr[h-tempp][k]++;
        }
    }
    
    /*for(k = 0; k < h; k++){
        for(j = 0;j < n; j++){
            cout << arr[k][j] <<"\t";
        }
        cout << "\n";
    }*/    
    for(k = 0; k < h;k++){
        maxonfloor[k] = 0;
        for(j = 0;j < n; j++){  
            if(k > jump-1){
                //peopleonfloor[j][k] += max(peopleonfloor[j][k-1], maxonfloor[k-jump]);
                arr[k][j] += max(arr[k-1][j], maxonfloor[k-jump]);
            }
            else if(k > 0){
                //peopleonfloor[j][k] += peopleonfloor[j][k-1];
                arr[k][j] += arr[k-1][j];
            }
            
            if(maxonfloor[k] < arr[k][j])
                maxonfloor[k] = arr[k][j];     
        }
        //cout << k << "->" << maxonfloor[k] <<"\n";
    }
    cout << maxonfloor[k-1];
    return 0;
}
