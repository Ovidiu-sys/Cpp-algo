#include<iostream>
#include <string>
 
 
using namespace std;
 
 
int main() {
 
	string s;
	cin >> s;
 
	int maxi = 1,cnt=1;
 
	for (int i = 1; i < s.size();i++) {
		if (s[i] != s[i - 1])
			cnt = 1;
		else
			cnt++;
 
		if (cnt > maxi)
			maxi = cnt;
	}
	cout << maxi;
 
	return 0;
}
