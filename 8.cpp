/*8.Generate Fibonacci series using naive approach.
	INPUT : 6
	OUTPUT : 0,1,1,2,3,5
*/
#include<bits/stdc++.h>
using namespace std;
void fib(int n)
{
	int t1=0,t2=1,t3=0;
	cout<<t1<<endl;
	cout<<t2<<endl;
	int i=0;
	while(i<n-2)
	{
		t3=t1+t2;
		cout<<t3<<endl;
		t1=t2;
		t2=t3;
		i++;
	}
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	fib(n);
return 0;
}
