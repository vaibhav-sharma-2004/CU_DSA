#include<iostream>
using namespace std;

/*
input a number and check if it is odd or even
*/

int main(){

    int num;
    cin>>num;

    // if(num%2==0){

    //     cout<<"even number";
    // }

    // else{
    //     cout<<"odd number";
    // }

    int bit=num&1;

    if(bit==1){
        cout<<"odd number";
    }

    else{
        cout<<"even number";
    }

    return 0;
}