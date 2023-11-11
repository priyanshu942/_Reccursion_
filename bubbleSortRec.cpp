#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr ,int i,int n)
{
	
	if(n==0)
	{
		return;
	}
	
	if(i<n-1)
	{
	if(arr[i]>arr[i+1] )
	{
		int a=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=a;
		
	}
	bubble_sort(arr,i+1,n);
	}
	else{
		bubble_sort(arr,0,n-1);
	}
	
	
	
}

int main()
{
	int arr[5]={3,7,1,5,2};
	bubble_sort(arr,0,5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i];
	}
	
	return 0;
}
