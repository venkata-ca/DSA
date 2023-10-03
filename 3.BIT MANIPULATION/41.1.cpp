/*41.1.Find the first set bit
	You will be given a number. Write a program to find the first set bit in it's binary form.
	
	INPUT : 10 (1010)
	OUTPUT : 2	
*/
#include<bits/stdc++.h>
using namespace std;
int firstSet(int n)
{
	int count=1;
	while(n>0)
	{
		if(n%2==1)
		return count;
		count++;
		n=n/2; 
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
