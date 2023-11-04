#include<bits/stdc++.h>
using namespace std;
int cnt0(int n,int count)
{
	if(n==0)
	{
		return count;
		
	}
	if(n%10==0)
	{
		cnt0(n/10,count+1);
	}
	else{
		cnt0(n/10,count);
	}
}
int main()
{
	int a=cnt0(30009890,0);
	cout<<a;
	return 0;
}
