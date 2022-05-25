#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll p1,p2,p3,p4,count=0;
    cin>>p1>>p2>>p3>>p4;
    if(p1>=10) count++;
    if(p2>=10) count++;
    if(p3>=10) count++;
    if(p4>=10) count++;

    cout<<count<<"\n";


}



int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

solve();

return 0;
}