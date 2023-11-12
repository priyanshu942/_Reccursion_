#include<bits/stdc++.h>
using namespace std;
int st=0;
int a=INT_MIN;
void selectionSort(int*arr,int i,int n,int ind)
{
	if(n==0)
	{
		return;
	}
	
	if(i<n)
	{
		if(arr[i]>arr[ind])
		{
			selectionSort(arr,i+1,n,i);
		}
		else{
			selectionSort(arr,i+1,n,ind);
		}
	}
	else{
		swap(arr[n-1],arr[ind]);
		selectionSort(arr,0,n-1,0);
	}
		
}
int main()
{
	int arr[11]={5,9,2,4,1,89,3,1,7,6,8};
	selectionSort(arr,0,11,0);	

	for(int i=0;i<11;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
