// ISOGRAM
// https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not/0
// https://ide.codingblocks.com/#/s/30023


#include <iostream>
// #include<cstring>
using namespace std;

int main() {
// 	int a[26]={0};
	int t,x;
	string s;
	cin>>t;
	bool flag;
	while(t)
	{
	    int a[26] = {0};
	    cin>>s;
	   // n = s.length();
	    flag = true;
	    for(int i=0;s[i] != '\0';i++)
	    {
	         x = s[i]- 'a';
	        //  cout<<s[i]<<" : "<<x<<endl;
	         if(a[x] == 0)
	         {
                 a[x] = 1;
             }
	         else
	         {
	             flag = false;
	             break;
	         }
	        
	    }
	    if(flag)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    cout<<"0"<<endl;
	    
	    t--;
	}
	return 0;
}