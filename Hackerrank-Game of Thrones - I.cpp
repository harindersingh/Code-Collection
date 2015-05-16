#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
	int x,i,sum;
    
	int count[26];
	for(i=0;  i<26; i++)
			count[i] = 0;
		sum = 0;
		cin>>str;
		x = str.length();
		
        //if(x%2 == 1)
		    //cout<<"-1"<<endl;
		//else
		//{
			for(i = 0; i < x/2 ;i++){
                if(count[str[i] - 'a'] == 0)
                    count[str[i] - 'a']++;
                else
                    count[str[i] - 'a']--;
            }
            for(i = x/2; i < x; i++){
                if(count[str[i] - 'a'] == 0)
                    count[str[i] - 'a']++;
                else
                    count[str[i] - 'a']--;
            }
			
			for(i=0 ; i<26 ; i++)
			{
				sum = sum + mod(count[i]);
			}
		
		if(sum == 0 || sum == 1)	
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
		//}
	
	return 0;
}