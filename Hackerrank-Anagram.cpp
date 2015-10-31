#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int mod (int x)
{
    if(x<0)
    	return (-1)*x;
	else
		return x;
}

int main()
{
	string str;
	int t,x,i,sum;
	cin>>t;
	
	int count[26];
	while(t--)
	{
		for(i=0;  i<26; i++)
			count[i] = 0;
		sum = 0;
		cin>>str;
		x = str.length();
		
		if(x%2 == 1)
			cout<<"-1"<<endl;
		else
		{
			for(i = 0; i < x/2 ;i++)
				count[str[i] - 'a']++;
			for(i = x/2; i < x; i++)
				count[str[i] - 'a']--;
			
			for(i=0 ; i<26 ; i++)
			{
				sum = sum + mod(count[i]);
			}
			sum = sum/2;
			cout<<sum<<endl;
		}
	}
	return 0;
}