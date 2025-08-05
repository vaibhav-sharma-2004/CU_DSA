#include<iostream>
using namespace std;

/*
print the pattern

1
2 3
4 5 6
7 8 9 10
*/

int main(){

    int n;
    cin>>n;

    int row=1;
    int num=1;

    while(row<=n)
    {
        int col=1;

        while(col<=row){

            //print
            cout<<num<<" ";


            //updation
            num=num+1;
            col=col+1;
        }

        cout<<endl;
        row=row+1;
    }

    return 0;
}