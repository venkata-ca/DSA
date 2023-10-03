/*39.Binary to grey code conversion.
	Write a program to convert a given binary number into gray code.
	
	INPUT : x = 6
	OUTPUT : 5
*/
#include<bits/stdc++.h>
using namespace std;
int gray(int x)
{
	return x^(x>>1);
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<gray(n);
return 0;
}
