#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll n;
    cin>>n;
    string st;
    cin>>st;
    ll begin=0,end=n-1,count=0;
    while(begin<end){
        if(st[begin]!=st[end]){
        count++;
        begin++;
        end--;
        }
        else {
            begin++;
            end--;
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