//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define srt(v) sort(v.begin(),v.end())
#define desort(v) sort(v.begin(),v.end(),greater<int>())
const int MOD = 1e9+7;
#define pb push_back
#define FOR(i,A,n) for(int i=A;i<n;i++)
#define FORN(i,A,n) for(int i=A;i<=n;i++)
#define theforce ios::sync_with_stdio(false);cin.tie(0);
#define input(x) int x;cin>>x;v.pb(x);
#define inp(n) int n;cin>>n;
#define endl '\n'
using vi = vector<int>;
// to get ith bit and with 1<<i
void solve(){
    int n; cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        v.pb({x,y});
    }
    srt(v);
    int ans=0;
    for(int i=0;i<(n-1);i++){
        if(v[i].first==v[i+1].first){
            if(v[i].second!=v[i+1].second) ans+=n-2;
        }
    }
    set<pair<int,int>> s(v.begin(),v.end());
    for(auto it:s){
        int p=it.first;
        int q=it.second;
        if(s.find({p-1,!q})!=s.end() && s.find({p+1,!q})!=s.end()){
            ans++;
        }
    }
    cout<<ans<<endl;
}
signed main(){
    theforce;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
/*Don't get stuck with one approach
  Keep trying till you get it done
  Don't lose your cool
  All the best
*/