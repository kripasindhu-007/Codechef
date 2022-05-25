#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){

    ll n,min=INT_MAX,max=0;
    cin>>n;
    ll arr[n];
    loop(i,0,n){
        cin>>arr[i];
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }



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