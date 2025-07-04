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
    int flag=1; // tells if a number is prime or not 
    //when flag is 1 it means that number is prime and when flag is 0 then the number is not prime

    //loop condition
    while(i<n){

        if(n%i==0){

            flag=0;
        }

        //updation
        i=i+1;
    }

    if(flag==1){
        cout<<"number is prime"<<endl;
    }

    else{
        cout<<"number is not prime"<<endl;
    }

    return 0;
}