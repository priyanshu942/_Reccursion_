#include<bits/stdc++.h>
using namespace std;

void revpat(int r,int c)
{
	if(r==0)
	{
		return;
	}
	else if(r>c)
	{
		cout<<"*";
		revpat(r,c+1);
		cout<<"*";
		
	}
	else{
		cout<<"\n";
		revpat(r-1,0);
		cout<<"\n";
		
	}
}

//void pat(int r,int c)
//{
//	if(r==4)
//	{
//		return;
//	}
//	else if(r<c)
//	{
//		cout<<"*";
//		pat(r+1,c);
//	}
//	else{
//		cout<<"\n";
//		pat(0,c+1);
//	}
//}

int main()
{
	revpat(4,0);
	//pat(0,1);	
	return 0;
}
