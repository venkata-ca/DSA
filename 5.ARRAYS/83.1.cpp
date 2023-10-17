/*
83.1.Maximum difference in an array.

    Write a program to find the maximum difference between any two elements in a given array.(Such that arr[j]-arr[i] where j>i)

    INPUT : arr[] = {2,3,10,6,4,8,1}, n= 7
    OUTPUT : 8 (10-2)
*/
#include<bits/stdc++.h>
using namespace std;
int maxDiff(int arr[],int n)
{
	int res=arr[1]-arr[0];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			res=max(res,arr[j]-arr[i]);
		}
	}
	return res;
}
int main()
{
	int arr[100],i,n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<maxDiff(arr,n)<<endl;
return 0;
}