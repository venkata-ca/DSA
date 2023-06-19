/*
2.Write a program to count the digits of a given number.
	I/P : 123
	O/P : 3
	Method-2 : Recursive
*/
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
	if(n==0)
		return 0;
	else
		return 1+countDigits(n/10);
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	cout<<countDigits(n);
return 0;
}
