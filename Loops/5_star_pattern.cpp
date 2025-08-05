#include<iostream>
using namespace std;

/*

print the below pattern

*
* *
* * *
* * * *
* * * * *


*/

int main(){

    int n=5;

    //initialization
    int row=1;

    //loop condition
    while(row<=n){//OUTER LOOP

        //work

        //intitialization
        int col=1;

        //loop condition
        while(col<=row){ //INNER LOOP

            //work
            cout<<"*";

            //updation
            col=col+1;
        }

        cout<<endl;

        //updation
        row=row+1;
    }

    return 0;
}