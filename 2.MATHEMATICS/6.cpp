/*6.Factorial of a number using recursion.
	INPUT : 5
	OUTPUT : 120 (5*4*3*2*1)
*/
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	int fac=1;
	for(int i=2;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<fact(n)<<endl;
return 0;
}
