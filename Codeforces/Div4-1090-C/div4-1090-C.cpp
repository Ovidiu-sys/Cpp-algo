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
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >>t;
    while(t--){
 
        int n;
        cin >> n;
        
        for(int i=1;i<=n;i++) cout << i << " " << n + 2*i -1 << " " << n + 2*i<< " ";
        cout << "\n";
 
    }
 
    return 0;
}
