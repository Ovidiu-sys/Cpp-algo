#include<iostream>
#include <string>
#include<cmath>
 
using namespace std;
 
int main() {
 
	long long n,cnt=0;
 
	cin >> n;
 
	while (n) {
		cnt += n / 5;
		n /= 5;
	}
	cout << cnt;
 
	return 0;
}
