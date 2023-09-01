#include<bits/stdc++.h>
using namespace std;

int ptsum1(int sum,int arr[],int n,int sm,int ind)
{
    if(sm>sum)
    {
        return 0;
    }
	if(ind==n)
	{
	
	if(sm==sum)
	{
		
		return 1;
	}
	else{
		return 0;
	}
}
	
	sm=sm+arr[ind];
	int r=ptsum1(sum,arr,n,sm,ind+1);
	sm=sm-arr[ind];
	int l=ptsum1(sum,arr,n,sm,ind+1);
	
	return l+r;
}

int main()
{
	int sum=2;
	
	int arr[5]={3,1,2,3,4};
	int sm=0;

	cout<<ptsum1(sum,arr,5,sm,0);
	return 0;
}
