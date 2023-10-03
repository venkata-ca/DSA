/*
2.Write a program to count the digits of a given number.
	I/P : 123
	O/P : 3
	Method-1 : Naive
*/
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
	int count=0;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
return count;
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	cout<<countDigits(n);
return 0;
}
