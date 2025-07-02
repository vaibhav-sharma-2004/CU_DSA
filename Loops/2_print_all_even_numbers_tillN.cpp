#include<iostream>
using namespace std;

/*
input a number N from user and print all the even numbers till N
range 0 to N

input=10

output= 0 2 4 6 8 10 
*/

int main(){

    //input
    int n;
    cin>>n;

    //initialization
    int i=0;

    //loop condition

    //LOGIC 1
    // while(i<=n){

    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }

    //     i=i+1;
    // }


    //LOGIC 2
    while(i<=n){

        cout<<i<<" ";

        i=i+2;
    }

    return 0;
}