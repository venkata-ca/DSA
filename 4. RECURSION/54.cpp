/* 54.Towers of Hanoi
	Implement Towers of Hanoi.
	
	INPUT : 3
	OUTPUT : Move 1 from A to C
			 Move 2 from A to B
			 Move 1 from C to B
			 Move 3 from A to C
			 Move 1 from B to A
			 Move 2 from B to C
			 Move 1 from A to C
*/
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char a,char b,char c)
{
	if(n==1)
	{
		cout<<"Move 1 from "<<a<<" to "<<c<<endl;
		return;
	}
	toh(n-1,a,c,b);
	cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
	toh(n-1,b,a,c);
	
}
int main()
{
	int n;
	char a,b,c;
	cout<<"Enter the number of disks"<<endl;
	cin>>n;
	toh(n,'a','b','c');
	return 0;
}
