#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int i, j, n, m,temp;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    
    cin >> m;
    int brr[m];
    for(i = 0; i < m; i++)
        cin >> brr[i];
    sort(brr, brr+m);
    j = 0;
    
    /*cout<<"\n";
    for(i = 0;i < n; i++)
        cout<< arr[i] <<" ";
    cout<<"\n";
    for(i = 0; i < m; i++)
        cout << brr[i] <<" ";
    cout<<"\n";
    */
    temp = 0;
    for(i = 0;i < m; i++){
        if(arr[j] == brr[i])
            j++;
        else{
            if(brr[i] != temp){
                cout << brr[i] <<" ";
                temp = brr[i];
            }
           
        }
    }
        
}