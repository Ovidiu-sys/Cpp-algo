#include<iostream>
#include <string>
#include<cmath>
 
using namespace std;
 
#define ll long long 
const int maxi = 1e9;
 
 
int main() {
 
	ll n,x,mx, ans=0;
	cin >> n;
	for (ll i = 0; i < n; ++i) {
		cin >>x;
		
		mx = max(mx, x);
		ans += mx - x;
	}
	cout << ans;
 
	return 0;
}
