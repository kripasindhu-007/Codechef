#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
ll n,count=0;
cin>>n;
ll s[n],d[n];
loop(i,0,n)cin>>s[i];
loop(i,0,n)cin>>d[i];
loop(i,0,n){
    if(s[i]==d[i])
    count++;
}
cout<<count<<"\n";

}



int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
solve();
}
return 0;
}