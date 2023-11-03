#include<bits/stdc++.h>
using namespace std;

void prt(int n)
{
	if(n==0)
	{
		return;
	}
	
	cout<<n<<"\n";
	prt(n-1);
	cout<<n<<"\n";
}

int main()
{
	prt(5);
	return 0;
}
