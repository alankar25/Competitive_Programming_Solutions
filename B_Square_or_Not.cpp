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
bool isSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}
void solve(){
    int n; cin>>n;
    string s;
    cin>>s;
    if(isSquare(n)){
        int f1=0;
        int p=sqrt(n);
        int a[p][p];
        int k=0;
        int ap=0;
        for(int i=0;i<p;i++){
            for(int j=k;j<k+p;j++){
                a[i][ap]=(s[j]-'0');
                ap++;
            }
            ap=0;
            k+=p;
        }
        // for(int i=0;i<p;i++){
        //     for(int j=0;j<p;j++){
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<p;i++){
            for(int j=0;j<p;j++){
                if(i==0 || i==(p-1) || j==0 || j==(p-1)){
                    if(a[i][j]!=1){
                        f1=1;
                        break;
                    }
                }
                else if(a[i][j]!=0){
                    f1=1;
                    break;
                }
            }
            if(f1) break;
        }
        if(f1) cout<<"NO"<<endl;
        else cout<<"Yes"<<endl;
    }
    else cout<<"NO"<<endl;

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