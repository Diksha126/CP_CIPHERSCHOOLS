#include <iostream>
using namespace std;

int main() {
	
	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	if(x1<=x2&& v1<=v2)
	cout<<"No";
	if(x1>=x2 && v1>=v2)
	cout<<"No";
	
	if(x1>x2)
	{
	    swap(x1,x2);
	    swap(v1,v2);
	}
	
	if(((x1-x2)%(v1-v2))==0)
	cout<<"Yes";
	else
	cout<<"No";
}