/*
67.Delete an element from an array by index.

    Write a program to delete a specified element from a given array.
    
    INPUT : arr[]={1,2,3,4,5} n=5 ele=2
    OUTPUT : arr[]={1,3,4,5}
*/
#include<bits/stdc++.h>
using namespace std;
void deleted(int arr[],int n,int ele)
{
	int pos;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele)
		pos=i;
	}
	for(int i=pos;i<n-1;i++)
	arr[i]=arr[i+1];
	for(int i=0;i<n-1;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[100],n,ele;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter the value of ele"<<endl;
	cin>>ele;
	deleted(arr,n,ele);
return 0;
}