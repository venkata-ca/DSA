/* 43.Printing numbers from 1 to n using  recursion.
	Write a program to print numbers from 1 to N using recursion.
	
	INPUT : n = 10
	OUTPUT : 1 2 3 4 5 6 7 8 9 10
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
	if(n==0)
	return;
	print(n-1);
	cout<<n<<endl;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	print(n);
return 0;
}
