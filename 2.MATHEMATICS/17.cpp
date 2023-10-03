/*17. Write a program to find the sum of Fibonacci numbers in a range.
	INPUT : 5
	OUTPUT : 7 (0+1+1+2+3)
*/
#include<bits/stdc++.h>
using namespace std;
int sumFib(int n)
{
	int sum=0,t1=0,t2=1,t3=0,i=0;
	sum=t1+t2;
	while(i<n-2)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		sum=sum+t3;
		i++;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<sumFib(n)<<endl;
return 0;
}
