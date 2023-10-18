/*
87.1Stock buy and sell problem.

    You are given an array of prices where prices[i] is the price of a given stock on an ith day.
    You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

    INPUT : arr[] = {1,5,3,8,12}, n=5
    OUTPUT : 13

    INPUT :arr[] = {30,20,10}, n=3
    OUTPUT : 0

    INPUT : arr[] = {10,20,30}, n=3
    OUTPUT : 20

    INPUT : arr[] = {1,5,3,1,2,8}, n=6
    OUTPUT : 11
*/
#include<bits/stdc++.h>
using namespace std;
int maxProfit(int arr[],int n)
{
	int profit=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
		profit+=arr[i]-arr[i-1];
	}
	return profit;
}
int main()
{
	int arr[100],i,n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<maxProfit(arr,n);
return 0;
}