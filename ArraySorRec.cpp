#include<bits/stdc++.h>
using namespace std;

bool arrSor(int i,int arr[],int n)
{
	if(i==n)
	{
		return true;
	}
	if(arr[i-1]>arr[i])
	{
		return false;
	}
	else {
		return arrSor(i+1,arr,n);
	}
}
int main()
{
	int arr[5]={1,2,3,4,2};

	cout<<arrSor(1,arr,5);
	
	return 0;
	
}
