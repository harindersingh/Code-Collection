#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool myfunction (int i,int j) { return (i > j); }
int main(void) {
    int N, K;

    cin >> N >> K; 
    vector <int> input_array;
    int temp;
    for(int i = 0; i < N; i++) {
        cin >> temp;
        input_array.push_back(temp);
    }

    sort (input_array.begin(), input_array.end(), myfunction);
    //cout << endl;

    unsigned long result = 0;                                                                     
    for (int j = 0; j < N; j++) {
        result += (j/K + 1)*input_array[j];
//      cout << result << endl;
    }

    cout << result << endl;                                                         
    return 0;
}