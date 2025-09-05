#include<iostream>
using namespace std;

int main(){

    int n=5;
    int setbits=0;

    //#APPROACH 1:
    // while(n>0){

    //     //work
    //     int rem=n%2;

    //     setbits=setbits+rem;
    //     // if(rem==1){
    //     //     setbits++;
    //     // }

    //     n=n/2;
    // }

    //# APPROACH 2:

    while(n>0){

        //step 1: find the first bit using & operator

        int bit=n&1;

        setbits=setbits+bit;

        //step 2: go to the left bit using right shift

        n=n>>1;
    }

    cout<<"number of set bits are:"<<setbits<<endl;
    return 0;
}