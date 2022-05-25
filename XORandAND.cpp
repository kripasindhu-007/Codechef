#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back

using namespace std;
  
 
void solve(){
ll n,count=0,a;
cin>>n;
vector<ll> num;
loop(i,0,n){
    cin>>a;
    num.pb(a);
}
sort(num.begin(),num.end());
loop(i,0,n){
    loop(j,i,n){
        if((1<=num[i]<num[j]<=n)&&(num[i]^num[j]<num[i]&num[j]))
        count++;
    }
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