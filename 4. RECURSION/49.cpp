/* 49. Difference of two numbers using recursion.

	Write a program to find the difference of two numbers using recursion.
	
	INPUT : a = 20, b = 10
	OUTPUT : 10
*/
#include<bits/stdc++.h>
using namespace std;
int diff(int a, int b)
{
	if(b==1)
		return a-1;
	else
		return diff(a,b-1)-1;

}
int main()
{
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<diff(a,b);
return 0;
}
