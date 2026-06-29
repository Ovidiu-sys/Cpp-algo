#include<iostream>
#include <string>
#include<cmath>
 
using namespace std;
 
const long long MOD = 1e9 + 7;
 
long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
 
int main() {
 
	long long n;
	cin >> n;
 
	cout << mod_pow(2, n, MOD);
 
	return 0;
}
