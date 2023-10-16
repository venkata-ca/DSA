/*
81.Right rotate an array by k steps.

    Write a program to rotate all the elements of the given array towards right side by k units.

    INPUT : arr[]={1,2,3,4,5} n=5 k=1
    OUTPUT : arr[]={5,1,2,3,4}
*/
#include<bits/stdc++.h>
using namespace std;
void rightRotate(int arr[],int n,int k)
{
	for(int j=0;j<k;j++)
	{
	
		int temp=arr[n-1];
		for(int i=n-1;i>0;i--)
			arr[i]=arr[i-1];
		arr[0]=temp;
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[100],n,k;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter the value of k"<<endl;
	cin>>k;
	rightRotate(arr,n,k);
return 0;
}