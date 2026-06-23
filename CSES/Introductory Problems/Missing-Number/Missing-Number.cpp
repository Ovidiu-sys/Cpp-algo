#include<iostream>
using namespace std;
 
 
int main() {
 
	long long n, s=0;
	cin >> n;
	long long cn = n;
	while (cn != 1) {
		
		long long num;
		cin >> num;
		s += num;
		
		cn--;
	}
 
	cout << n * (n + 1) / 2 - s;
 
	return 0;
}
