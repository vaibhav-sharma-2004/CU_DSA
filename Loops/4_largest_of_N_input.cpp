#include<iostream>
#include<limits.h>
using namespace std;

/*
input a number N from user and take N more number inputs, print the largest number among them
*/

int main(){

    int n;
    cin>>n;

    int i=1;
    int maxi=INT_MIN;

    int mini=INT_MAX;

    cout<<"maxi:"<<maxi<<endl;
    cout<<"mini:"<<mini<<endl;

    //loop condition
    while(i<=n){

        int num;
        cin>>num;

        if(num>maxi){
            maxi=num;
        }

        if(num<mini){
            mini=num;
        }

        i=i+1;
    }

    cout<<"maximum number is:"<<maxi<<endl;
    cout<<"minimum number is:"<<mini<<endl;

    return 0;
}