#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v={0,1,0,1,0,1,0,1};
	int zp=0;
	int op=v.size()-1;
    while(zp<op)
	{
	    if(v[zp]==0)
	    zp++;
	    else if(v[zp]==1)
	    {
	        swap(v[zp],v[op]);
	        op--;
	    }
	    
	}
	for(int i=0;i<v.size();i++)
	cout<<v[i];
	return 0;
}