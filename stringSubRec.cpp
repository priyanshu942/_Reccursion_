#include<bits/stdc++.h>
using namespace std;

vector<string>si;
void findpc(string s,int i,int n,string e)
{
	if(i==n)
	{
		si.push_back(e);
		return;
	}

	findpc(s,i+1,n,e);
	e=e+s[i];
	findpc(s,i+1,n,e);
}

int main(){

findpc("abc",0,3,"");
for(int i=0;i<si.size();i++)
{
	cout<<si[i]<<"\n";
}

return 0;	
}
