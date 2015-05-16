#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int count_duplicates(vector <int> array) {
    int count = 0;
    for (int i = 1; i < array.size(); i++) {
        if (array[i] == array[i-1]){
//            cout << array[i] << "||";
            count++;
      }
    }
//    cout << endl;
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;
    //cout << N << " " << K << endl;

    vector <int> input_array;
    int temp;
    for (int i = 0; i < N; i++) {
        cin >> temp; 
        input_array.push_back(temp);
        input_array.push_back(temp + K);
    }

    sort (input_array.begin(), input_array.end());
//    for (int i = 0; i < input_array.size(); i++) 
//        cout << input_array[i] << " " ;
                              
//    cout << endl;
    int count = count_duplicates(input_array);
    cout << count << endl;    

    return 0;
}           