#include<bits/stdc++.h>
using namespace std;

bool ptsum1(int sum,int arr[],int n,int sm,vector<int>sbs,int ind)
{
	if(ind==n)
	{
	
	if(sm==sum)
	{
		for(auto i:sbs)
		{
			cout<<i;
		}
		return true;
	}
	else{
		return false;
	}
}
	sbs.push_back(arr[ind]);
	sm=sm+arr[ind];
	if(ptsum1(sum,arr,n,sm,sbs,ind+1)==true)
	{
		return true;
	}
	sbs.pop_back();
	sm=sm-arr[ind];
	if(ptsum1(sum,arr,n,sm,sbs,ind+1)==true){
		return true;
	}
	return false;
}

int main()
{
	int sum=2;
	
	int arr[5]={1,1,2,3,4};
	int sm=0;
	vector<int>sbs;
	ptsum1(sum,arr,5,sm,sbs,0);
	return 0;
}
