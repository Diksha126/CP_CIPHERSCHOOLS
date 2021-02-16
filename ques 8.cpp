#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	sort(v.begin(),v.end());
	vector<int>res(n);
	int st=0;
	int end=n-1;
	int i=0;
	bool flag=false;
	while(st<=end)
	{
	    if(flag==true)
	    {
	    res[i]=v[st];
	    st++;
	    flag=false;
	    }
	    else
	    {
	        res[i]=v[end];
	        end--;
	        flag=true;
	    }
	    i++;
	    
	}
	for(int i=0;i<n;i++)
	cout<<res[i]<<" ";
	
	return 0;
}