/*
64.Insert an element into an array by position.

    Write a program to insert the given element into the array based on the specified position.
    
    INPUT : arr[]={5,10,20,_,_} , n=5, pos=1, ele=7
    OUTPUT : arr[]={5,7,10,20,_}
*/
#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n,int pos,int ele)
{
	for(int i=n-1;i>=pos;i--)
		arr[i+1]=arr[i];
	arr[pos]=ele;
	for(int i=0;i<=n;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[100],n,pos,ele;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of pos"<<endl;
	cin>>pos;
	cout<<"Enter the value of ele"<<endl;
	cin>>ele;
	insert(arr,n,pos,ele);
return 0;
}