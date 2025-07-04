#include<iostream>
using namespace std;

/*
print all the prime numbers in the range 2 to N
*/

int main(){

    //take input from user

    int n;
    cin>>n;

    int num=2;

    while(num<=n){

        // work : check if the number is prime or not        
        int i=2;
        int flag=1;

        while(i<=num-1){

            if(num%i==0){
                flag=0;
            }

            i=i+1;
        }

        if(flag==1){
            cout<<num<<endl;
        }

        num=num+1;
    }

    return 0;
}