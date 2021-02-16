#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    
	vector<int>v={8,4,2,1};
	int n=v.size();
	
	set<int>s;
	s.insert(v[0]);
	int dist=0;
	set<int>::iterator it;
	
	for(int i=1;i<n;i++)
	{
	    s.insert(v[i]);
	    
	    it=s.upper_bound(v[i]);
	    
	    dist+=distance(it,s.end());
	}
	
	cout<<dist<<endl;
	return 0;
}