/* 29. Palindrome check
	Write a program to check whether the given number is palindrome or not.
	
	INPUT : 12321
	OUTPUT : YES
*/
#include<bits/stdc++.h>
using namespace std;
bool pal(int num)
{
	int rev=0,n=num;
	while(n!=0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	if(num==rev)
		return true;
	return false;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(pal(n))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
return 0;
}
