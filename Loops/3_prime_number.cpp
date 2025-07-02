#include<iostream>
using namespace std;

/*
check if a number is prime or not
*/

int main(){

    int n;
    cin>>n;

    //intialize
    int i=2;

    //loop condition
    while(i<n){

        if(n%i==0){
            cout<<"it is not a prime number";
            //stop
            return 0;
        }

        //updation
        i=i+1;
    }

    cout<<"prime number";
    return 0;
}