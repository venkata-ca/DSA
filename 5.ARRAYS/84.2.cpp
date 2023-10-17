/*
84.2.Count distinct elements in an array.

    Write a program to count all the distinct elements in an array.

    INPUT : arr[] = {15,12,13,12,13,13,18}, n = 7
    OUTPUT : 4
*/
#include<bits/stdc++.h>
using namespace std;
int countDist(int arr[], int n)
{
    unordered_set <int> s;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
return s.size();
}
int main()
{
	int arr[100],i,n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<countDist(arr,n)<<endl;
return 0;
}