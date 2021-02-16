#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={3, 0, 2, 0, 4};
    vector<int>lmax(v.size());
    lmax[0]=v[0];
    vector<int>rmax(v.size());
    rmax[v.size()-1]=v[v.size()-1];
    
    for(int i=1;i<v.size();i++)
    {
        lmax[i]=max(lmax[i-1],v[i]);
    }
    for(int i=v.size()-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],v[i]);
    }
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
       sum=sum+min(lmax[i],rmax[i])-v[i];
    }
    
    cout<<sum;
	return 0;
}