/*
69.Update an element from an array by value.

    Write a program to update an element with another element in a given array.
    
    INPUT : arr[]={1,2,3,4,5} n=5 ele1=3 ele2=7
    OUTPUT : arr[]={1,2,7,4,5}
*/
#include<bits/stdc++.h>
using namespace std;
void update(int arr[],int n,int ele1,int ele2)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele1)
		{
			arr[i]=ele2;
			break;
		}
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int n,arr[100],ele1,ele2;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter the value of ele1"<<endl;
	cin>>ele1;
	cout<<"Enter the value of ele2"<<endl;
	cin>>ele2;
	update(arr,n,ele1,ele2);
return 0;
}