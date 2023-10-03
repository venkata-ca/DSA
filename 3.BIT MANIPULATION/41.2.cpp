/*41.2.Find the first set bit
	You will be given a number. Write a program to find the first set bit in it's binary form.
	
	INPUT : 10 (1010)
	OUTPUT : 2	
*/
#include<bits/stdc++.h>
using namespace std;
int firstSet(int n)
{
	int i=1;
	while(n>0)
	{
		if((n&1)==1)
		return i;
		i++;
		n=n>>1;
	}
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<firstSet(n)<<endl;
return 0;
}
