#include<iostream>
using namespace std;
int main()
{
    int total_exam;
    scanf("%d",total_exam);

    int total_test;
    scanf("%d",total_test);

    int grade[total_test];
    int counter=0;
    int sum,avg;
    
    for(int i=0;i<total_test;i++){
        scanf("%d",grade[i]);
    }
    
    for(int j=0;j<total_test;j++){
        if(grade[j]==2){
        cout<<"No";
        break;
        }

        if(grade[j]==5){
        counter++;
        }
        sum=sum+grade[j];
    }
    avg=sum/total_test;

    if(counter!=0){
        if(avg>=4){
            cout<<"Yes";
        }
        else
        cout<<"No";
    }
    else
    cout<<"No";

return 0;
}