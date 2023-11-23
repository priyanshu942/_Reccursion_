#include<bits/stdc++.h>
using namespace std;

string skipa(string s,int i,int n)
{
	if(i==n)
	{
		return "@";
	}
	
	if(s[i]=='a')
	{
		return skipa(s,i+1,n);
	}
	else{
		return s[i]+skipa(s,i+1,n);
	}
	
}
int main()
{
	string s="aheaaaaalalaoaaaa";
	cout<<skipa(s,0,s.length());
	
	return 0;
}
