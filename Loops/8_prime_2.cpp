#include<iostream>
using namespace std;

/*
check if a number is prime or not
*/

int main(){

    int n;
    cin>>n;

    int i=2;
    int flag=1;// flag=1 means that my number is prime

    while(i<=n-1){

        if(n%i==0){
            flag=0;//flag =0 means that my number is not prime
            break;
        }
        i=i+1;
    }

    if(flag==1){
        cout<<"prime number"<<endl;
    }

    else{
        cout<<"not a prime number"<<endl;
    }

    return 0;
}