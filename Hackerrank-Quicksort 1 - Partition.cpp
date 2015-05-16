#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
void partition(vector <int>  ar) {
    vector <int> array;
    int pivot = ar[0];
    int j = 0;
    for (int i = 0; i < ar.size(); i++){
        if (ar[i] < pivot){
            array.push_back(ar[i]);
            j++;
        }
    }
//    cout << j << endl;
    array.push_back(pivot);
    j++;
    for (int i = 1; i < ar.size(); i++){
        if (ar[i] >= pivot){
            array.push_back(ar[i]);
            j++;
        }

    }

  //  cout << j << ar.size() << endl;
    for (int k = 0; k < j; k++)
        cout << array[k] <<" ";


}
/* Tail starts here */
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    partition(_ar);
             
    return 0;
}