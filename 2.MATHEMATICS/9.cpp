/* 9.Check if the given number is Fibonacci number or not.
	INPUT : 5
	OUTPUT : YES
*/
#include<bits/stdc++.h>
using namespace std;
bool checkFib(int n)
{
	int t1=0,t2=1,t3=0;
	if(t1==n)
	return true;
	if(t2==n)
	return true;
	while(t3<=n)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		if(t3==n)
		return true;
	}
	return false;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<checkFib(n)<<endl;
return 0;
}
