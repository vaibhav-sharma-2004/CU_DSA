#include<iostream>
using namespace std;

/*
problem: input a number and check if it is positive or negative
*/

int main(){

    int num;
    cin>>num;

    if(num>0){
        cout<<"positive number";
    }

    else if(num==0){
        cout<<"zero";
    }
    
    else{
        cout<<"negative number";
    }

    return 0;
}