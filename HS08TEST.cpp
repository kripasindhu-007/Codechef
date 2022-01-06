#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int amount;
    float balance;
    cin>>amount;
    cin>>balance;
    if(balance<amount+0.5){
        printf("%.2f",balance);
    }
    else if(amount%5==0){
        balance=balance-amount-.50;
        printf("%.2f",balance);
    }
    else{
        printf("%.2f",balance);
    }
return 0;
}