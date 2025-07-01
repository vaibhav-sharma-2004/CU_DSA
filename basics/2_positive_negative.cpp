#include<iostream>
using namespace std;

/*
problem: input a number and check if it is positive or negative
*/

int main(){

    int n;
    cin>>n;

    if(n>0){
        cout<<"positive number"<<endl;
    }

    else if(n==0){
        cout<<"number is zero"<<endl;
    }

    else{
        cout<<"negative number"<<endl;
    }

    return 0;
}