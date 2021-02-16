#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={0,0,0,1,1,1,2,2,2};
    int n=arr.size();
    
    int zp=0,op=0,tp=n-1;
    while(op<=tp)
    {
        if(arr[op]==0)
        {
            swap(arr[zp],arr[op]);
            zp++;
            op++;
        }
        else if(arr[op]==1)
        {
            op++;
        }
        else if(arr[op]==2)
        {
            swap(arr[op],arr[tp]);
            tp--;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
	return 0;
}