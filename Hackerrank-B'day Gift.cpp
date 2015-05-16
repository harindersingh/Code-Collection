#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
	long long int x,sum=0;
	cin>>N;
	for(int i = 0 ; i < N ; i++)
	{
		cin>>x;
		sum = sum + x;
	}
	if(sum%2==0)
	{
		cout<<sum/2<<".0"<<endl;
		return 0;
	}
	else
	{
		cout<<sum/2<<".5"<<endl;
		return 0;
	}

    return 0;
}
