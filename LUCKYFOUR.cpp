#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int arr[T];
    for(int i=0;i<T;i++)
    {
        cin>>arr[i];
    }
    int counter=0;
    for(int i=0;i<T;i++)
    {
        int num=arr[i];
        while(num > 0)
        {
            int digit=num%10;
            if(digit==4)
            {
            counter++;
            }
            num=num/10;
        }
        cout<<counter<<endl;
        counter=0;
    }
    return 0;
}