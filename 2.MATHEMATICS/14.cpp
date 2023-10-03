/* 14. Write a program to reverse a given number.
	INPUT : 125
	OUTPUT : 521
*/
#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
	int num=0;
	while(n!=0)
	{
		num=(num*10)+(n%10);
		n=n/10;
	}
	return num;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<rev(n)<<endl;
return 0;
}
