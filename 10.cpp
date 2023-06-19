/* 10.Count of Fibonacci numbers in a range.
	INPUT : 10
	OUTPUT : 7 (0,1,1,2,3,5,8)
*/
#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
	int count=1;
	int t1=0,t2=1,t3=0;
	while(t3<=n)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		count++;
	}
	return count;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<fib(n)<<endl;
return 0;
}
