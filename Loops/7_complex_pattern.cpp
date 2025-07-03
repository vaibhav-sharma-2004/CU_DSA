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

        //step 1:print spaces

        int space=1;

        while(space<=n-row){

            cout<<" ";
            space++;
        }

        //step 2:print increasing numbers

        int increasing=row;

        int i=1;
        while(i<=row){

            cout<<increasing<<" ";
            increasing=increasing+1;
            i=i+1;
        }


        //step 3:print decreasing value

        int decreasing=2*row-2;

        int j=1;

        while(j<=row-1){

            cout<<decreasing<<" ";
            decreasing=decreasing-1;
            j=j+1;
        }

        cout<<endl;
        row=row+1;
    }

    return 0;
}