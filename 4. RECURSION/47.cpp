/* 47. Sum of n natural numbers using recursion.

	Write a program to find the sum of n natural numbers using recursion.
	
	INPUT : 5
	OUTPUT : 15
*/
#include<bits/stdc++.h>
using namespace std;
int nSum(int n)
{
	if (n==0)
	return 0;
	else
		return n + nSum(n-1);
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<nSum(n)<<endl;
return 0;
}
