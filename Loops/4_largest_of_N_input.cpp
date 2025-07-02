#include<iostream>
using namespace std;

/*
input a number N from user and take N more number inputs, print the largest number among them
*/

int main(){

    int N;
    cin>>N;//number of inputs

    //initialization
    int i=1;
    int maxi=-1;//stores the maximum number of N inputs

    //loop condition
    while(i<=N){

        int num;
        cin>>num;

        if(num>maxi){
            maxi=num;
            i=i+1;
        }

        else{

            i=i+1;
        }
    }

    cout<<"max number is:"<<maxi<<endl;

    return 0; 
}