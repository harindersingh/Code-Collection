#include <iostream>
#include <vector>
using namespace std;
int main(void) {

    int n, r, c;
    int a,b;
    char arr[100][100];

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 'p')
            {
                a=i;
                b=j;
            }
        }
    }
    if(r<a)
    {
        cout<<"DOWN"<<endl;
        return 0;
    }
    if(r>a)
    {
        cout<<"UP\n";
        return 0;
    }
    
    //COLUMN MOVEMENT
    if(c<b)
    {
        cout<<"RIGHT\n";
        return 0;
    }
    if(c>b)
    {
        cout<<"LEFT\n";
        return 0;
    }
    
    return 0;
}