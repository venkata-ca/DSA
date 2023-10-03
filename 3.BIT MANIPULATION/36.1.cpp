/* 36.1. One odd occuring.

	You will be given a set of elements and you need to find the one odd occuring element in 
	that set. Every element will appear even number of times except that one element.
	
	INPUT : arr[]={4,3,4,4,4,5,5}	
	OUTPUT : 3 ==> occurs odd number of times.
*/
#include<bits/stdc++.h>
using namespace std;
void odd(int arr[],int n)
{
	int j,i;
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count%2!=0)
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[100],n,i;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	odd(arr,n);
return 0;
}
