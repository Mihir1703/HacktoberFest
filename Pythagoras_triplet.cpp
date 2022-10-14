#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
  ll x;
  cin>>x;
  if(x<3){
    cout<<"-1\n";
    return;
  }
  if(x%2){
    cout<<((x*x)-1)/2<<" "<<((x*x)+1)/2<<"\n";
  } 
  else {
    cout<<(((x*x)/2)-2)/2<<" "<<(((x*x)/2)+2)/2<<"\n";
  }
	return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--){
      solve();
    }
    return 0;
}