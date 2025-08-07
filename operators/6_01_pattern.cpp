#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        //even
        if(row%2==0){
            //work
            int x=0;

            for(int col=1;col<=row;col++)
            {
                //print x element
                cout<<x<<" ";

                //alter the value of x
                x=1-x;
            }
        }

        else{

            int x=1;

            for(int col=1;col<=row;col++)
            {
                cout<<x<<" ";
                x=1-x;
            }
        }

        cout<<endl;
    }

    return 0;
}