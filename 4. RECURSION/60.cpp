/*
60. Printing all the sub sequences whose sum is equal to the given value using recursion.

    Write a program to print all the sub sequences of the given array whose sum is equal to the given value using recursion.

    INPUT : arr[] = {3,1,2}, n=3, sum = 3
    OUTPUT : {3}, {1,2}
*/
#include<bits/stdc++.h>
using namespace std;
void printS(int ind, vector <int>&ds, int s, int sum, int arr[], int n)
{
    if(ind == n)
    {
        if(s == sum)
        {
            for(auto it: ds)
                cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    printS(ind+1, ds,s, sum, arr, n);

    ds.pop_back();
    s-=arr[ind];
    printS(ind+1, ds, s, sum, arr, n);

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