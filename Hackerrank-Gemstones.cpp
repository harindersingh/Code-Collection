#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int n, dup, i, j, count[26], sum, x;
    string str;
    cin >> n;
    dup = n;
    for(i=0;  i<26; i++)
        count[i] = 0;
    
    for(j = 0;j < n; j++){
	    sum = 0;
		cin>>str;
        //cout << str<<endl;
		x = str.length();
        for(i = 0; i < x ;i++){
           if(count[str[i]-'a'] == j)	
                count[str[i] - 'a']++;
           // cout<<count[i]<<"\t";
        }
        
        //for(i=0;i<26;i++){
         //cout << count [i] <<"\t";
        //}
        //cout <<"\n";
    }
    for(i=0;  i<26;i++){
        //cout << count [i] <<"\t";
        if (count[i] == dup)
            sum++;
    }
    cout <<sum << endl;
    return 0;
}