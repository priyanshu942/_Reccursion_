#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int k,int s,int e)
{
	int m=(s+e)/2;
	if(s>e)
	{
		return -1;
	}
	if(arr[m]==k)
	{
		return m;
	}
	else if(arr[m]<k)
	{
		return bsearch(arr,k,m+1,e);
	}
	else if(arr[m]>k){
		return bsearch(arr,k,s,m-1);
	}
	
}


int main()
{
	int arr[5]={1,2,3,4,5};
	int a=bsearch(arr,7,0,4);
	cout<<a;
	return 0;
}

