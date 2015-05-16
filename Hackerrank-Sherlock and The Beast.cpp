#include <iostream>
using namespace std;

int main()
{
    int n, t, i, j, k, kstart;
	cin >> t;
	while(t--)
	{
		cin >> n;
		string ks;
		for(i = n; i >= 0; i--)
		{
			if(i%3 == 0 && (n-i)%5 == 0)
			{
				ks = "";
				for (j = 0; j < i; j++)
					ks+='5';
				for(j = 0; j < n-i; j++)
					ks+='3';
                break;
			}
		}
		if(ks == "")
			cout<<"-1\n";
		else
			cout<<ks<<endl;
	}
	return 0;
}