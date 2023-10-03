/* 13.Multiplication under modulo.
	Given integers a,b,m. Find (a*b)MOD m, where a,b may be large and their direct multiplication may
cause overflow. However, they are smaller than half of the maximum allowed long long int value.

	INPUT : a=246, b=964, m=235
	OUTPUT : 119
	
	(426 * 964)%235 = 410664 % 235
		            = 119
*/
#include<bits/stdc++.h>
using namespace std;
long long moduloMultiplication(long long a, long long b,
                               long long mod)
{
    long long res = 0; // Initialize result
 
    // Update a if it is more than
    // or equal to mod
    a %= mod;
 
    while (b) {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % mod;
 
        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % mod;
 
        b >>= 1; // b = b / 2
    }
 
    return res;
}
int main()
{
    long long a = 426;
    long long b = 964;
    long long m = 235;
    cout << moduloMultiplication(a, b, m);
    return 0;
}
