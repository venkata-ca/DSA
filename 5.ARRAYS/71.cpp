/*
71.Smallest element in an array.

    Write a program to find the smallest number in the given array.

    INPUT : arr[]= {5,4,1,7,9}, n = 5
    OUTPUT : 1
*/
#include<bits/stdc++.h>
using namespace std;
int small(int arr[],int n)
{
	int minim=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<minim)
		minim=arr[i];
	}
	return minim;
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
	cout<<small(arr,n)<<endl;
return 0;
}