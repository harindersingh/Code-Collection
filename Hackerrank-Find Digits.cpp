#include <iostream>
using namespace std;

int main()
{
    long long int t, n, check, original, count;
	cin >> t;
    while(t--){
        count = 0;
        cin >> n;
        original = n;
        while(n){
            check = n % 10;
            n = n/10;
            if(check == 0)
                continue;
            if(original % check == 0)
                count++;
        }
        cout << count << endl;
    }
	return 0;
}