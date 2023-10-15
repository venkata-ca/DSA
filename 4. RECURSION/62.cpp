/*
62. Counting the number of sub sequences whose sum is equal to the given value using recurson.

    Write a program to count the number of sub sequences in a given array whose sum is equal to the given vslue using recursion.

    INPUT : arr[] = {1,2,1}, n=3, sum = 2
    OUTPUT : 2
*/
#include<bits/stdc++.h>
using namespace std;
int printS(int ind, int s, int sum, int arr[], int n)
{
    if(ind == n)
    {
        if(s == sum)
        {
            return 1;
        }
        return 0;
    }
    s+=arr[ind];
    int l = printS(ind+1,s, sum, arr, n);

    s-=arr[ind];
    int r = printS(ind+1, s, sum, arr, n);
    
return (l+r);
}
int main()
{
    int arr[100],n,sum;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements into the array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the sum value"<<endl;
    cin>>sum;
    cout<<printS(0,0,sum, arr, n);
return 0;
}