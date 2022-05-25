#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll n,n1,n2,n3,n4;
    cin>>n;
    cin>>n1>>n2>>n3>>n4;
    

    ll temp1=max(n1,n2);
    ll temp2=max(temp1,n3);
    ll temp3=max(temp2,n4);

    cout<<temp3<<"\n";
  

    



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