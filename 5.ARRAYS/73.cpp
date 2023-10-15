/*
73.Second smallest element in an array

    Write a program to find the second smallest element in the given array.

    INPUT : arr[] = {5,4,1,7,9}, n = 5
    OUTPUT : 4
*/
#include<bits/stdc++.h>
using namespace std;
int slarge(int arr[],int n)
{
	int maxi=max(arr[0],arr[1]);
	int mini=min(arr[0],arr[1]);
	for(int i=2;i<n;i++)
	{
		if(arr[i]<mini)
		{
			maxi=mini;
			mini=arr[i];
		}
		else if(arr[i]>mini && arr[i]<maxi)
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
	cin>>arr[i];
	cout<<slarge(arr,n);
return 0;
}