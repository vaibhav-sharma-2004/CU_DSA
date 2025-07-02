#include<iostream>
using namespace std;

/*
input a number from user and print numbers from 1 to N
*/

int main(){

    int n;
    cin>>n;

    //initialization
    int i=1;

    //loop condition
    while(i<=n){

        //work
        cout<<i<<" ";

        //updation
        i=i+1;
    }

    return 0;
}