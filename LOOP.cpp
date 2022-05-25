#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll a,b,m,ans;
    cin>>a>>b>>m;
    int x=b-a;
    int y=abs(m-b)+a;
    
   if(x<=y)
   cout<<abs(x)<<"\n";
   else
   cout<<abs(y)<<"\n";
    


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