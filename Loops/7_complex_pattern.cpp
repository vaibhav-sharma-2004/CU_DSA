#include<iostream>
using namespace std;

/*
print the pattern :
     1
   2 3 2
  3 4 5 4 3
 4 5 6 7 6 5 4  
*/

int main(){

    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        //step 1: print the spaces

        int spaces=1;

        while(spaces<=n-row){
            cout<<" ";

            //updation
            spaces=spaces+1;
        }

        //step 2:print the increasing numbers

        int increasing=row;
        int col=1;

        while(col<=row){
            cout<<increasing<<' ';

            //updation
            increasing=increasing+1;
            col=col+1;
        }

        //step 3:print decreasing values

        int decreasing=2*row-2;

        int j=1;

        while(j<=row-1){
            cout<<decreasing<<' ';

            //update
            decreasing=decreasing-1;
            j=j+1;
        }

        //update row
        row=row+1;
        cout<<endl;
    }

    return 0;
}

 