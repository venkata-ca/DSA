/*
78.Left rotate an arrayby one step.

    Write a program to rotate all the elements of the given array towards  left side by one unit.

    INPUT : arr[]={1,2,3,4,5} n=5
    OUTPUT : arr[]={2,3,4,5,1}
*/
#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n)
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
	    arr[i-1]=arr[i];
	arr[n-1]=temp;
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
	leftRotate(arr,n);
return 0;
}