/*
82.2.Leaders in an array using naive approach.

    Write a program to print the leaders of a given array.
    A leader is an element which do not have any larger elements towards its right side.

    INPUT : arr[]={7,10,4,3,6,5,2} n=7
    OUTPUT : 10,6,5,2
*/
#include<bits/stdc++.h>
using namespace std;
void leaders(int arr[],int n)
{
	cout<<arr[n-1]<<endl;
	int maxi=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>maxi)
		{
			maxi=arr[i];
			cout<<maxi<<endl;
		}
	}
}
int main()
{
	int arr[100],n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	leaders(arr,n);
return 0;
}