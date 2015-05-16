#include <iostream>
using namespace std;

int main()
{
    int i, t, n;
    long long int count, temp;
	cin >> t;
    while(t--){
        count = 0;
        cin >> n;
        if(n == 1 || n == 0){
            cout << 0 << "\n";
            continue;
        }
        if(n == 2){
            cout << 1 << "\n";
            continue;
        }
        temp = n-2;
        for(i = n-1; i > 0; i--)
            count += i;
        cout << count << "\n";
    }
	return 0;
}
