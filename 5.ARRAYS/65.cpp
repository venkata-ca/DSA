/*
65.Insert an element into an array by value.

    Write a program to insert a given element into an array based on a value.
    
    INPUT : arr[]={5,2,9,_,_} , n=5, ele1=2, ele2=6
    OUTPUT : arr[]={5,2,6,9,_,_}
*/
#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n,int ele1,int ele2)
{
	int pos;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele1)
		pos=i+1;
	}
	for(int i=n-1;i>=pos;i--)
		arr[i+1]=arr[i];
	arr[pos]=ele2;
	for(int i=0;i<=n;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[100],n,ele1,ele2;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of ele1"<<endl;
	cin>>ele1;
	cout<<"Enter the value of ele2"<<endl;
	cin>>ele2;
	insert(arr,n,ele1,ele2);
return 0;
}