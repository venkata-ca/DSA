/*
63. Subset sum

    Write a program to print all the sums of sub sequences of a given array using recursion in increasing order.

    INPUT : arr[] = {3,1,2}, n=3
    OUTPUT : 0 1 2 3 3 4 5 6
*/
#include<bits/stdc++.h>
using namespace std;
void subSet(int ind, int sum, vector<int> &arr, int n, vector<int> sumsubset)
{
    if(ind == n)
    {
        sumsubset.push_back(sum);
        return;
    }
 
    // Pick the element
    subSet(ind+1, sum + arr[ind], arr, n, sumsubset);

    // Unpick the element
    subSet(ind+1, sum, arr, n, sumsubset);
    
}
vector<int>subsetsums(vector<int>arr, int n)
{
    vector<int> sumsubset;
    subSet(0,0,arr,n,sumsubset);
    sort(sumsubset.begin(), sumsubset.end());

return sumsubset;
}
int main()
{
    int n,sum,value;
    vector<int> arr,x;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements into the array" << endl;
    for (int i = 0; i < n; i++) {
        cin>>value;
        arr.push_back(value);
    }
    cout<<"Enter the sum value"<<endl;
    cin>>sum;
    x = subsetsums(arr,n);
    for(int i=0;i< x.size();i++)
        cout<<x[i]<<" ";
return 0;
}