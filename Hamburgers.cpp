#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sol(ll burg,ll nb,ll ns,ll nc,ll pb,ll ps,ll pc,ll r,string s){
    ll rb=0,rs=0,rc=0;
    for (char x:s){
        if(x=='B'){
          rb++;
        }
        else if(x=='C'){
          rc++;
        }
        else{
          rs++;
        }
    }
    rb*=burg;
    rs*=burg;
    rc*=burg;
    rb=max(0LL,rb-nb);
    rc=max(0LL,rc-nc);
    rs=max(0LL,rs-ns);
    return (rb*pb)+(rc*pc)+(rs*ps);
}
void solve(){
    ll nb,ns,nc;
    ll pb,ps,pc;
    ll r;
    string s;
    cin>>s;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    ll l=0,rl=1e15;
    ll ans=0;
    while(l<=rl){
        ll mid=(l+rl)/2;
        if (sol(mid,nb,ns,nc,pb,ps,pc,r,s)<=r){
            ans=mid;
            l=mid+1;
        }
        else{
            rl=mid-1;
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
    return 0;
}