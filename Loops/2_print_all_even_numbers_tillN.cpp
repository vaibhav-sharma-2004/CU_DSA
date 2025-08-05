#include<iostream>
using namespace std;

/*
input a number N from user and print all the even numbers till N
range 0 to N

input=10

output= 0 2 4 6 8 10 
*/

int main(){

    int n;
    cin>>n;

    //initialize
    int i=1;

    //loop condition
    while(i<=n){

        //work
        if(i%2==0){
            cout<<i<<" ";
        }

        //updation
        i=i+1;
    }

    cout<<endl;

    //approach 2
    int j=2;

    while(j<=n){

        cout<<j<<" ";
        j=j+2;
    }

    return 0;
}