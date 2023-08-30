#include<bits/stdc++.h>
using namespace std;

void sub(int arr[],int i,vector<int>sb,int n)
{
	if(i==n)
	{
		for(auto it:sb)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		return ;
	}
	
	sb.push_back(arr[i]);
	sub(arr,i+1,sb,n);
	sb.pop_back();
	sub(arr,i+1,sb,n);
}

int main()

{
	
	int arr[3]={1,2,3};
	vector<int>sb;
	sub(arr,0,sb,3);
}
