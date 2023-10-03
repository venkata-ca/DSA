/* 50.Genarate Fibonacci series using recursion.
	Write a program to generate Fibonacci series using recursion.
	
	INPUT : 6
	OUTPUT : 0 1 1 2 3 5
*/
#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
	if(n<=1)
	return n;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cout<<fib(i)<<endl;
return 0;
}
