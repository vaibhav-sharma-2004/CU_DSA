#include<iostream>
using namespace std;

/*
check if a number is prime or not
*/

int main(){

    int n;
    cin>>n;

    //intialization
    int i=2;

    //loop condition
    while(i<=n-1){  // i<n and i<=n-1 are same

        //work
        if(n%i==0){
            cout<<"not prime number"<<endl;
            return 0;//exit from program
        }

        //updation
        i=i+1;
    }

    cout<<"prime number";

    //check if number is even or odd
    if(n%2==0){
        
    }

    return 0;//exit 
}