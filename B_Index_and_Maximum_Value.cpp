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
    int n,m; cin>>n>>m;
    vi v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.pb(x);
    }
    desort(v);
    vi ans;
    while(m--){
        char c;
        int l,r; cin>>c>>l>>r;
        if(r>=v[0]){
            if(c=='+'){
                if(l<=v[0]) v[0]++;
                ans.pb(v[0]);
            }
            else {
                if(l<=v[0]) v[0]--;
                ans.pb(v[0]);
            }
        }
        else ans.pb(v[0]);
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
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