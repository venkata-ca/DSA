/*
59. Printing all the sub sequences using recursion.

    Write a program to print all the sub sequences of the given array using recursion.

    INPUT : arr[] = {3,1,2}, n=3
    OUTPUT : {}, {3}, {1}, {2}, {3,1}, {1,2}, {3,2}, {3,1,2}
*/
#include<bits/stdc++.h>
using namespace std;
void printF(int ind, vector <int>&ds, int arr[], int n)
{
    if(ind == n)
    {
        for(auto it: ds)
            cout<<it<<" ";
        if(ds.size()==0)
            cout<<"{}";
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    printF(ind+1, ds, arr, n);

    ds.pop_back();
    printF(ind+1, ds, arr, n);

}
int main()
{
    int arr[100],n;
    vector<int> ds;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements into the array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printF(0, ds, arr, n);
return 0;
}