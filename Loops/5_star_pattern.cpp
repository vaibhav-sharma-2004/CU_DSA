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

    //input total no of rows from user
    int n;
    cin>>n;

    //intialize
    int row=1;

    //loop condition
    while(row<=n){

        //coloum in each row
        int col=1;

        //printing * symbol row number of times
        while(col<=row){

            cout<<"*";

            //updation
            col=col+1;
        }

        //go to new line
        cout<<'\n';

        //updation
        row=row+1;
    }

    return 0;
}