/*
77.1.Move zeroes to the end of the array using naive approach.

    Write a program to move all the zeroes in a given array to the end.

    INPUT : arr[]={8,5,0,10,0,20} n=6
    OUTPUT : arr[]={8,5,10,20,0,0}
*/
#include<bits/stdc++.h>
using namespace std;
void move(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[j]!=0)
				{
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[100],n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elemensts into the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	move(arr,n);
return 0;
}