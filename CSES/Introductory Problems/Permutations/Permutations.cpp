#include<iostream>
#include <string>
#include<cmath>
 
using namespace std;
 
#define ll long long 
const int maxi = 1e9;
 
 
int main() {
 
	ll n;
 
	cin >> n;
	if (n <= 3 && n!=1)
		cout << "NO SOLUTION";
	else {
		for (int i = n - 1; i >= 1; i -= 2) {
			cout << i << " ";
		}
		for (int i = n; i >= 1; i -= 2) {
			cout << i << " ";
		}
	}
	
	return 0;
}
