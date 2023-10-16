/*
80.Left rotate an array by k steps.

    Write a program to rotate all the elements of an array towards left by k units.

    INPUT : arr[]={1,2,3,4,5} n=5 k=1
    OUTPUT : arr[]={2,3,4,5,1}
*/
#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int k)
{
	for(int j=0;j<k;j++)
	{
        int temp=arr[0];
		for(int i=1;i<n;i++)
			arr[i-1]=arr[i];
		arr[n-1]=temp;
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
	leftRotate(arr,n,k);
return 0;
}