/*
You will be given a number n. Write a program to find the sum of natural numbers upto n.
	I/P : 5
	O/P : 15(1+2+3+4+5)
*/
#include<bits/stdc++.h>
using namespace std;
int nSum(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
		sum += i;
return sum;
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	cout<<nSum(n);
return 0;
}
