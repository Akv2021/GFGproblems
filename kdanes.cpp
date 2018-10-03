// Kadane's Algorithm
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
// https://ide.codingblocks.com/#/s/30028

#include <iostream>
using namespace std;

int main() {
    int t,n;
    
    cin>>t;
    int csum,msum;
    bool allneg;
    int ans;
    while(t)
    {   allneg = true;
        csum = 0;
        msum = 0;
        ans = -100000;
        cin>>n;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
            allneg = false;
            else
            ans = max(ans,arr[i]);
            csum += arr[i];
            
            if(csum<0)
            csum = 0;
            
            msum = max(csum,msum);
        }
        if(allneg)
        cout<<ans<<endl;
        else
        cout<<msum<<endl;
        t--;
    }
	//code
	return 0;
}