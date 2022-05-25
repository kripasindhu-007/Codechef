#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<=c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll n,count=0;
    cin>>n;
    ll a[n],b[n];
    loop(i,1,n)
    cin>>a[i];
    loop(j,1,n)
    cin>>b[j];
    loop(i,1,n){
        loop(j,i,n){
            
            
            if(i<j&&a[i]==b[j]&&a[j]==b[i])
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