#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
	if(n==0)
	{
		return ;
	}
	cout<<n<<" ";
	print(n-1);
	cout<<n<<" ";
	
}
int main()
{
	int n;
	cout<<"Enter from where you want to print\n";
	cin>>n;
	print(n);
	
	return 0;
}
