#include<iostream>
using namespace std;
int main()
{
    int num,ans;
    cin>>num;
    for(int i=1;i<=10;i++){
        if(num%i==0)
        ans=i;
    }
    cout<<ans;

return 0;
}