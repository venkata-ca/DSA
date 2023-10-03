/* 48. Sum of two numbers using recursion.

	Write a program to find the sum of two numbers using recursion.
	
	INPUT : a = 10, b = 20
	OUTPUT : 30
*/
#include<bits/stdc++.h>
using namespace std;
int summ(int a, int b)
{
	if(b==1)
		return a+1;
	else
		return 1+summ(a,b-1);

}
int main()
{
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<summ(a,b);
return 0;
}
