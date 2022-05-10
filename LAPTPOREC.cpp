#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll n,temp,max=0;
    cin>>n;
    int arr[n];
    loop(a,0,n)
    arr[a]=0;
    loop(i,0,n){
        cin>>temp;
        arr[temp-1]++;
    }

    loop(j,0,n){
       if(max<arr[j])
       max=arr[j];
    }
    ll cnt=0;

    loop(b,0,n){
        if(arr[b]==max)
        cnt++;
    }

    if(cnt>1)
    cout<<"CONFUSED\n";
    else if(cnt==1){
        loop(c,0,n){
            if(arr[c]!=max)
            continue;
            else
            cout<<c+1<<"\n";
        }
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