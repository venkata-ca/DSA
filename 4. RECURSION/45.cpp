/* 45. Count digits of a number using recursion.

	Write a program to count the digits of a given number using recursion.
	
	INPUT : 125
	OUTPUT : 3
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
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<countDigits(n)<<endl;
return 0;
}
