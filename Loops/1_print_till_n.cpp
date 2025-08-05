#include<iostream>
using namespace std;

/*
input a number from user and print numbers from 1 to N
*/

int main(){

    int n;
    cin>>n;


    //initialize
    int i=1;

    //condition
    while(i<=n){

        //work->print i
        cout<<i<<" ";

        //updation
        i=i+1;
    }

    return 0;
}