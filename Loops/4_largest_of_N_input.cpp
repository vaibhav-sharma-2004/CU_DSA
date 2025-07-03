#include<iostream>
#include<limits.h>
using namespace std;

/*
input a number N from user and take N more number inputs, print the largest number among them
*/

int main(){

    int N;
    cin>>N;//number of inputs

    //initialization
    int i=1;
    int maxi=INT_MIN;//stores the maximum number of N inputs  
    //-infinity= INT_MIN and +infinity= INT_MAX

    //loop condition
    while(i<=N){

        int num;
        cin>>num;

        if(num>maxi){
            maxi=num;
        }

        i=i+1;
    }

    cout<<"max number is:"<<maxi<<endl;

    return 0; 
}