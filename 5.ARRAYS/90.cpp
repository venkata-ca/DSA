/*
90.Majority element in an array.

	Write a program to find the majority element in a given array.
	A majority element is an element which appears more than n/2 times.

	INPUT : arr[] = {8,3,4,8,8}, n = 5
	OUTPUT : 0 or 3 or 4

	INPUT : arr[] ={3,7,4,7,7,5}, n = 6
	OUTPUT : -1 (No majority)
*/
#include<bits/stdc++.h>
using namespace std;
int major(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int count=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count>n/2)
		return i;
	}
	return -1;
}
int main()
{
	int n,arr[100],i;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<major(arr,n)<<endl;
return 0;
}