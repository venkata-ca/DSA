/*
68.Update an element from an array by index.

    Write a program to update an element in a given array based on index.
    
    INDEX : arr[]={1,2,3,4,5} n=5 pos=2 ele=7
    OUTPUT : arr[]={1,2,7,4,5}
*/
#include<bits/stdc++.h>
using namespace std;
void update(int arr[],int n,int pos,int ele)
{
	arr[pos]=ele;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int n,arr[100],pos,ele;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter the value of pos"<<endl;
	cin>>pos;
	cout<<"Enter the value of ele"<<endl;
	cin>>ele;
	update(arr,n,pos,ele);
return 0;
}