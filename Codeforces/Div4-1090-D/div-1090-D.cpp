#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include<numeric> 
using namespace std;
 
#define ll long long
 
bool is_prime(ll n){
    if(n == 2) return true;
    if (n %2 == 0 || n < 1) return false;
 
    for(int i=3;i*i<=n;i+=2)
        if( n%i == 0  ) return false;
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
 
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> prime;
 
        ll cnt=2;
        while(prime.size() < n-1){
            if( is_prime(cnt)) prime.push_back(cnt);
            cnt++;
        }
 
        a[0] = prime[0];
 
        for(int i=1;i<n-1;i++){
 
            a[i] = (ll)prime[i-1] * prime[i];
 
        }
        a[n-1] = prime[n-2];
 
        for(int i=0;i<n;i++) cout << a[i] << " ";
        cout << "\n";
 
    }
 
    return 0;
}
