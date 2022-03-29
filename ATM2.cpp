#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
   ll n,k;
   vector<ll>ans;
   cin>>n>>k;
   ll arr[n];
   loop(i,0,n)cin>>arr[i];
   loop(j,0,n){
       if(arr[j]<=k){
           k -=arr[j];
           ans.pb(1);
       }
       else
       ans.pb(0);
   }
   loop(i,0,ans.size())cout<<ans.at(i);
   cout<<"\n";

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