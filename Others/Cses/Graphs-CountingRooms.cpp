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
vector<int> adj[100005];
vector<bool> viz(100005,false);
string s[1001];
int n,m;


bool valid(int i,int j){

    return i>=0 && j>=0 && i <n && j < m && s[i][j]=='.';
}

void dfs(int i, int j){

    s[i][j] = '#';

    if (valid(i-1,j)) dfs(i-1,j);
    if ( valid (i+1,j)) dfs (i+1,j);
    if(valid(i,j-1)) dfs(i,j-1);
    if( valid(i,j+1) ) dfs(i,j+1);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i=0;i<n;i++) cin >> s[i];

    int ans=0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if( valid(i,j)) dfs(i,j) , ans++;
        }
    }

    cout << ans << "\n";


    return 0;
}
