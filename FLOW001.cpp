#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int arr_1[T];
    int arr_2[T];
    for(int i=0;i<T;i++){
        cin>>arr_1[i]>>arr_2[i];
    }
    for(int j=0;j<T;j++){
        cout<<arr_1[j]+arr_2[j]<<endl;
    }
    return 0;
}