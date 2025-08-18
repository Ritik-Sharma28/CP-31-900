#include<bits/stdc++.h>

using ll = long long;

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        
        int a , b , xk ,yk , xq ,yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

     int dx[8] = { a,  a, -a, -a,  b,  b, -b, -b };
     int dy[8] = { b, -b,  b, -b,  a, -a,  a, -a };

    vector<pair<ll,ll>> K;
    vector<pair<ll,ll>> Q;

    for (int i = 0; i < 8; i++) {
            K.push_back({xk + dx[i], yk + dy[i]});
            Q.push_back({xq + dx[i], yq + dy[i]});
        }
    



   set<pair<ll, ll>> sK(K.begin(), K.end());
set<pair<ll, ll>> sQ(Q.begin(), Q.end());

int cnt = 0;
for (auto &pos : sK) {
    if (sQ.count(pos)) cnt++;
}

    

    cout << cnt << endl;
        
    }
    






    return 0;
}