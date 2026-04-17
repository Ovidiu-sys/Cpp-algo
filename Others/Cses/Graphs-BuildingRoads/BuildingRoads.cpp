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
const int mod = 1e9 +7;
vector<int> adj[100005];
vector<bool> viz(100005,false);

void dfs(int node){
    
    viz[node] = true;
    for( auto vecin : adj[node] )
        if( viz[vecin] == false ) dfs(vecin);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >>m;

    int x,y;
    for( int i=0;i<m;i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> insule;
    for(int i=1;i<=n;i++){
        if(viz[i] == false){
            insule.push_back(i);
            dfs(i);
        }
    }
    cout << insule.size()-1<<"\n";
    for(int i=0;i<insule.size()-1;i++){
        cout << insule[i] << " "<< insule[i+1]<< "\n";
    }

    return 0;
}
