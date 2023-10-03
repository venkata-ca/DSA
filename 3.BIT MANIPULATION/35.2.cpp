/*35.2. Power of two
	You will be given a number and you need to find whether the given number is power of two or not.
	
	INPUT : 8
	OUTPUT : TRUE
	
	INPUT : 9
	OUTPUT : FALSE
*/
#include<bits/stdc++.h>
using namespace std;
bool isPower(int n)
{
	if(n==0)
	return false;
	return(n&(n-1)==0);
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(isPower(n))
	cout<<"FALSE"<<endl;
	else
	cout<<"TRUE"<<endl;
return 0;
}
