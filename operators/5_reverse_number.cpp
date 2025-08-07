#include<iostream>
using namespace std;

int main(){

    int n=1234;

    // while(n>0){

    //     //work
    //     int rem=n%10;
    //     cout<<rem;

    //     //updation
    //     n=n/10;
    // }

    int reverse=0;

    while(n>0){
        int dig=n%10;
        reverse=reverse*10 + dig;

        n=n/10;
    }

    cout<<reverse<<endl;
    cout<<2*reverse<<endl;

    return 0;
}