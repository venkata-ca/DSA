/* 37.2. Two odd occuring (NAIVE)

	You will be given a set of elements and you need to find the two odd occuring elements in 
	that array. Every element will appear even number of times except those two elements.
	
	INPUT : arr[]={3,4,3,4,5,4,4,6,7,7} and n=10
	OUTPUT : 5,6
*/
#include<bits/stdc++.h>
using namespace std;
void odd(int arr[],int n)
{
	int res1=0,res2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		res1=res1^arr[i];
		else
		res2=res2^arr[i];
	}
	cout<<res1<<endl<<res2<<endl;
}
int main()
{
	int n,arr[100],i;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	odd(arr,n);
return 0;
}
