/*
70.Largest element in an array.
    Write a program to find the largest number in the given array.

    INPUT : arr[]= {5,4,1,7,9}, n=5
    OUTPUT : 9
*/
#include<bits/stdc++.h>
using namespace std;
int large(int arr[],int n)
{
	int maxi=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxi)
		maxi=arr[i];
	}
	return maxi;
}
int main()
{
	int n,arr[100];
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<large(arr,n)<<endl;
return 0;
}