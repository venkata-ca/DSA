/*
88.1.Trapping rain water.
    Given an array of n non negative integers arr[] representing an elevation map where the width of each bar is 1. Compute how much water is able to trap after raining.

    INPUT : arr[] = {2,0,2}
    OUTPUT : 2

    INPUT : arr[] = {3,0,1,2,5}
    OUTPUT : 6

    INPUT : arr[] = {1,2,3}
    OUTPUT : 0

    INPUT : arr[] ={3,2,1}
    OUTPUT : 0
*/
#include<bits/stdc++.h>
using namespace std;
int getWater(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n-1;i++)
	{
		int lmax=arr[i];
		for(int j=0;j<i;j++)
		    lmax=max(lmax,arr[j]);
		int rmax=arr[i];
		for(int j=i+1;j<n;j++)
		    rmax=max(rmax,arr[j]);
		res=res+(min(lmax,rmax)-arr[i]);
	}
	return res;
}
int main()
{
	int n,arr[100],i;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<getWater(arr,n)<<endl;
return 0;
}