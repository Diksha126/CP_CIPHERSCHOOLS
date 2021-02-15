#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>a, int size)
{
    
    // your code here
    int count=1;
    int res=0;
    for (int i=1;i<size;i++)
    {
        if(a[res]==a[i])
        count++;
        else
        count--;
        if(count==0)
        {
        res=i;
        count=1;
        }
    }
    int s=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[res])
        s++;
    }
    if (s>size/2)
    return a[res];
    else
    return -1;
}
int main() {
	int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    cout<<majorityElement(v,n);
      
}

    
