/*
85.Frequencies in a sorted array.

    Write a program to find all the frequencies of elements in a given sorted array.

    INPUT : arr[] = {10,10,10,25,30,30}, n = 6
    OUTPUT : 10  3
             25  1
             30  2
*/
#include<bits/stdc++.h>
using namespace std;
void printFreq(int arr[],int n)
{
	int freq=1,i=1;
	while(i<n)
	{
		while(i<n&&arr[i]==arr[i-1])
		{
			freq++;
			i++;
		}
		cout<<arr[i-1]<<" "<<freq<<endl;
		i++;
		freq=1;
	}
	if(n==1 || arr[n-1]!=arr[n-2])
	cout<<arr[n-1]<<" "<<"1"<<endl;
}
int main()
{
	int arr[100],i,n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	printFreq(arr,n);
return 0;
}