#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
  string a,s,b;
  cin>>a>>s;
  int js=s.size()-1,c=0;
  for(int ia=a.size()-1;ia>=0 && js>=0;ia--){
    if(js<ia){
      c=1;
      break;
    }
    if(a[ia]>s[js]){
      int f1=s[js]-'0';
      int f2=s[js-1]-'0';
      int f=(10*f2)+f1;
      int af=a[ia]-'0';
      int h=f-af;
      if(h<0 || h>9){
        c=1;
        break;
      }
      b+=(h+'0');
      s.erase(js-1,2);
      a.erase(ia,1);
      js--;js--;
      //cout<<f1<<" "<<f2<<" "<<f<<" "<<af<<" "<<h<<" *-> "<<b<<" <-**\n";
    }
    else{
      int h=s[js]-a[ia];
       s.erase(js,1);
      a.erase(ia,1);
      b+=(h+'0');
      if(h<0 || h>9){
        c=1;
        break;
      }
      //cout<<"else-> "<<s[js]-a[ia]<<" *-> "<<b<<" <-**\n";
      js--;
    }
  }
  if(s.size()>0){
    for(int g=s.size()-1;g>=0;g--){
      b+=s[g];
    }
  }
  int y=0;
  if(c==1){
    cout<<"-1\n";
  }
  else if(c==0){
    reverse(b.begin(),b.end());
    /*if(b[0]=='0' && y==0){
      b.erase(0,1);
      y=1;
    }*/
    cout<<stoll(b)<<"\n";
  }
  /*for(int i=b.size()-1;i>=0;i++){
    if(b[i]!='0'){
      cout<<b[i];
    }
  }
  cout<<"\n";*/
  }
  return 0;
}