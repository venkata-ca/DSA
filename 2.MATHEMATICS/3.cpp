/*
3.Write a program to find the sum of digits of a number.
	I/P : 532
	O/P : 10 (5+3+2)
*/	
#include<bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum += (n%10);
		n=n/10;
	}
return sum;
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	cout<<digitSum(n);
return 0;
}
