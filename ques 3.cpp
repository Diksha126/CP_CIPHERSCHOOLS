#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	for(int i=0;i<n;i++)
	{
	    if(i==0)
	    {
	    if(v[i]>v[i+1])
	    cout<<v[i];
	    }
	    else if(i==n-1)
	    {
	        if(v[i]>v[i-1])
	        cout<<v[i];
	    }
	    else
	    {
	        if(v[i]>v[i-1] && v[i]<v[i+1])
	        cout<<v[i];
	    }
	    
	}
	return 0;
}