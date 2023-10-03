/* 44.Printing numbers from 1 to n using  recursion.
	Write a program to print numbers from 1 to N using recursion.
	
	INPUT : n = 10
	OUTPUT : 10 9 8 7 6 5 4 3 2 1
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
	if(n==0)
	return;
	cout<<n<<endl;
	print(n-1);
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	print(n);
return 0;
}
