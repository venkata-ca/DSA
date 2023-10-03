/* 46.Sum of digits of a number using recursion.

	Write a program to count the sum of digits of a number using recursion.
	
	INPUT : 125
	OUTPUT : 8
*/
#include<bits/stdc++.h>
using namespace std;
int getSum(int n)
{
	if(n==0)
	return 0;
	return (n%10)+getSum(n/10);
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<getSum(n)<<endl;
return 0;
}
