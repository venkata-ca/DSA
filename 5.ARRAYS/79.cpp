/*
79.Right rotate an array by one step.

    Write a program to rotate all the elements of the given array towards  right side by one unit.

    INPUT : arr[]={1,2,3,4,5}, n=5
    OUTPUT : arr[]={2,3,4,5,1}
*/
#include<bits/stdc++.h>
using namespace std;
void rightRotate(int arr[],int n)
{
	int temp=arr[n-1];
	for(int i=n-1;i>0;i--)
	    arr[i]=arr[i-1];
	arr[0]=temp;
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<endl;
}
int main()
{
	int arr[100],n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	rightRotate(arr,n);
return 0;
}