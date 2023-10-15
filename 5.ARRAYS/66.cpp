/*
66.Delete an element from an array by index.

    Write a program to delete an element from the given array based on a specified position.
    
    INPUT : arr[]={1,2,3,4,5}  n=5  p=1
    OUTPUT : arr[]={1,3,4,5}
*/
#include<bits/stdc++.h>
using namespace std;
void deleted(int arr[],int n,int p)
{
	for(int i=p;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	for(int i=0;i<n-1;i++)
	cout<<arr[i]<<endl;
	
}
int main()
{
	int n,arr[100],p;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter the value of p"<<endl;
	cin>>p;
	deleted(arr,n,p);
return 0;
}