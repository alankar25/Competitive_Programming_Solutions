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
    char a[n][4];
    vi v;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
            if(a[i][j]=='#'){
                v.pb(j+1);
            }
        }
    }
    reverse(v.begin(),v.end());
    for(auto it:v){
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