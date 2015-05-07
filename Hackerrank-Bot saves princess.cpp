#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    char arr[100][100];
    int m,x,y,a,b;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 'm')
            {    
                x = i;
                y = j;
            }
            if(arr[i][j] == 'p')
            {
                a = i;
                b = j;
            }
        }
    }
    //ROW MOVEMENT
    if(x<a)
    {
        for(int i = x;i < a;i++)
            cout<<"DOWN"<<endl;
    }
    if(x>a)
    {
        for(int i = a;i < x;i++)
            cout<<"UP\n";
    }
    
    //COLUMN MOVEMENT
    if(y<b)
    {
        for(int i = y;i < b; i++)
            cout<<"RIGHT\n";
    }
    if(y>b)
    {
        for(int i = b;i < y;i++)
            cout<<"LEFT\n";
    }
    
    return 0;
}