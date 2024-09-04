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
    vi v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.pb(x);
    }
    map<int,int> mp;
    int cnt0=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) cnt0++;
        else mp[v[i]]++;
    }
    int maxi=INT_MIN;
    int ans=0;
    for(auto it:mp){
        if(it.second>1){
            ans+=(it.second*(it.second-1))/2;
        }
        maxi=max(maxi,it.second);
    }
    if(cnt0==n) cout<<(n*(n-1))/2<<endl;
    else if(cnt0==0) cout<<ans<<endl;
    else{
        int p=0;
        for(auto it:mp){
            if(it.second==maxi){
                p=it.first;
                break;
            }
        }
        int ans1=0;
        for(auto it:mp){
            if(it.first==p) continue;
            else if(it.second>1){
                ans1+=(it.second*(it.second-1))/2;
            }
        }
        int al=maxi+cnt0;
        cout<<ans1+(al*(al-1))/2<<endl;
    }
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