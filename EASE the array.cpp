// EASE THE ARRAY
// https://practice.geeksforgeeks.org/problems/ease-the-array/0
// https://ide.codingblocks.com/#/s/30050

#include <iostream>
using namespace std;
int main() {
    int t,n;

    cin>>t;

    while(t)
    {
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        // modification
        for(int i=0;i<n-1;i++)
        {
            if(a[i])
            {   
                if((a[i]==a[i+1]) && a[i+1])
                {
                    a[i] *= 2;
                    a[i+1] = 0; 
                }
            }
        }

        // rearrange 
        int count = 0;
        int j = 0;
        for(int i= 0;i<n;i++)
        {
        if(a[i])
        {
            a[j] = a[i];
            j++;
        }
        else
        {
            count++;
        }

        }
        while(count && j<n)
        {
            a[j] = 0;
            count--;
            j++;
        }

        // print
        for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";

        cout<<endl;
        t--;
    }
}
