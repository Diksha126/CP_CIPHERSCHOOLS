#include <iostream>
using namespace std;
void search(int mat[4][4],int n,int k)
{
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        int st=mat[i][0];
        int end=mat[i][3];
        
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(mat[i][mid]==k)
            {
                cout<<i<<" "<<mid;
                flag=false;
                return;
            }
            else if(mat[i][mid]<k)
            {
                st=mid+1;
            }
            else 
            end=mid-1;
        }
        
    }
    if(flag==true)
    {
        cout<<"element not found";
    }
}

int main() {
    
  int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    search(mat, 4, 40);
  
}