#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll n,ans=0;
    
    cin>>n;
    ll arr[n];
    
   
    loop(i,0,n){
        cin>>arr[i];
        
    }
    for(int j=n-1;j>=0;j--){
        if(arr[j]!=0){
            ans=j;
            break;
        }
    }
    cout<<ans<<"\n";
  


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