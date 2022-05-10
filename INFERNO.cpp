#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll n,x,max=0,multi=0,single=0;
    cin>>n>>x;
    int arr[n+1];
    loop(i,1,n+1){
        cin>>arr[i];
    }
    loop(j,1,n+1){
        if(arr[j]<max)
        max=arr[j];

    }
    if(max<=x){
        multi=max;

    }
    else if(max>x){
        
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