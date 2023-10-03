/*12. Addition under modulo
	In most programming languages/competitions, we are required to answer the result in 10^9+7 modulo. The 
reason behind this is, if program constrains are large integers, only efficient algorithms can solve them 
in alloted limited time.

	INPUT : 5
	OUTPUT : 120
*/
#include<bits/stdc++.h>
using namespace std;
unsigned long long factorial(int n)
{
    const unsigned int M = 1000000007;
 
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++)
        f = (f*i) % M;  // Now f never can
                        // exceed 10^9+7
    return f;
}
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<factorial(n)<<endl;
return 0;
}
