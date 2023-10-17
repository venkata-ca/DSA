/*
82.1.Leaders in an array using naive approach.

    Write a program to print the leaders of a given array.
    A leader is an element which do not have any larger elements towards its right side.

    INPUT : arr[]={7,10,4,3,6,5,2} n=7
    OUTPUT : 10,6,5,2
*/
#include<bits/stdc++.h>
using namespace std;
void leaders(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		bool flag=true;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<=arr[j])
			{
				flag=false;
				break;
			}
		}
		if(flag==true)
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[100],n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	leaders(arr,n);
return 0;
}