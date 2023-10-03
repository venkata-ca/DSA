/*
2.Write a program to count the digits of a given number.
	I/P : 123
	O/P : 3
	Method-3 : Logarithmic
*/
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
	return floor(log10(n)+1);
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	cout<<countDigits(n);
return 0;
}
