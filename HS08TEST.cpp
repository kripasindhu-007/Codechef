#include<iostream>
using namespace std;
int main()
{
    int amount;
    float balance;
    cin>>amount;
    cin>>balance;
    if(balance<amount){
        cout<<balance;
    }
    else if(amount%10==5||amount%10==0){
        balance=balance-amount-.50;
        cout<<balance;
    }
    else{
        cout<<balance;
    }
return 0;
}