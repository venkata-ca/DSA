/*
61. Printing only one sub sequence whose sum is equal to the given value using recursion.

    Write a program to print only one sub sequence of the given array whose sum is equal to the given value using recursion.

    INPUT : arr[] = {1,2,1}, n=3, sum = 2
    OUTPUT : {1,1}
*/
#include<bits/stdc++.h>
using namespace std;
bool printS(int ind, vector <int>&ds, int s, int sum, int arr[], int n)
{
    if(ind == n)
    {
        if(s == sum)
        {
            for(auto it: ds)
                cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if(printS(ind+1, ds,s, sum, arr, n))
        return true;

    ds.pop_back();
    s-=arr[ind];
    if(printS(ind+1, ds, s, sum, arr, n))
        return true;
    
    return false;

}
int main()
{
    int arr[100],n,sum;
    vector<int> ds;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements into the array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the sum value"<<endl;
    cin>>sum;
    printS(0, ds,0,sum, arr, n);
return 0;
}