#include<bits/stdc++.h>
using namespace std;
int b[5];
int arr[5]={7,4,8,2,1};
void merge(int arr[],int l,int mid,int r)
{
	int i=l;
	int j=mid+1;
	int k=l;
	
	while(i<=mid && j<=r )
	{
		if(arr[i]<arr[j])
		{
		b[k]=arr[i];
		i++;	
		}
		else{
			b[k]=arr[j];
			
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=r)
		{
			b[k]=arr[j];
			k++;
			j++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=arr[i];
			k++;
			i++;
		}
	}
	
	for(k=l;k<=r;k++)
	{
		arr[k]=b[k];
	}
	
	
}
void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);	
	}	
	
}


int  main()
{
	
	mergeSort(arr,0,4);
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//
//int b[5];
//int arr[5] = {7, 4, 8, 2, 1};
//
//void merge(int arr[], int l, int mid, int r)
//{
//    int i = l;
//    int j = mid + 1;  // Fix: Start j from mid + 1
//    int k = l;
//
//    while (i <= mid && j <= r)
//    {
//        if (arr[i] < arr[j])
//        {
//            b[k] = arr[i];
//            i++;
//        }
//        else
//        {
//            b[k] = arr[j];
//            j++;
//        }
//        k++;
//    }
//
//    while (i <= mid)
//    {
//        b[k] = arr[i];
//        k++;
//        i++;
//    }
//
//    while (j <= r)
//    {
//        b[k] = arr[j];
//        k++;
//        j++;
//    }
//
//    for (k = l; k <= r; k++)
//    {
//        arr[k] = b[k];
//    }
//}
//
//void mergeSort(int arr[], int l, int r)
//{
//    if (l < r)
//    {
//        int mid = (l + r) / 2;
//        mergeSort(arr, l, mid);
//        mergeSort(arr, mid + 1, r);
//        merge(arr, l, mid, r);
//    }
//}
//
//int main()
//{
//    mergeSort(arr, 0, 4);
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << b[i] << " ";
//    }
//    return 0;
//}

