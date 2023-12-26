/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void selection(int *arr,int n,int i)
{
    if(i==n)
    {
        return;
    }
    int min=999;
    int ind;
    for(int j=i;j<n;j++)
    {
       if(arr[j]<min)
       {
           ind=j;
           min=arr[j];
       }
    }
    swap(arr[i],arr[ind]);
    selection(arr,n,i+1);
}

int main()
{
    int arr[5]={2,3,1,4,5};
   selection(arr,5,0);
   for(int i=0;i<5;i++)
   {
       cout<<arr[i]<<" ";
   }

    return 0;
}
