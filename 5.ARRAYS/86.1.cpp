/*
86.1. Frequencies in unsorted array.

    Write a program to find all the frequencies of elements in a given unsorted array.

    INPUT : arr[] = {10,12,10,15,10,20,12,12}, n = 8
    OUTPUT : 10  3
             12  3
             15  1
             20  1
        
*/
#include<bits/stdc++.h>
using namespace std;
void frequencies(int arr[], int n)
{
    int flag[n] = {0};
    for(int i=0;i<n;i++)
    {
        int count = 0;
        if(flag[i]!=1)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    flag[j]=1;
                }
            }
        }
        if(count>=1)
            cout<<arr[i]<<" "<<count<<endl;
    }
}
int main()
{
	int arr[100],i,n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	frequencies(arr,n);
return 0;
}