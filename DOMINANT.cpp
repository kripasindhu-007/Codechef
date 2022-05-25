#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>b+c||b>a+c||c>a+b)
    cout<<"YES\n";
    else
    cout<<"NO\n";


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