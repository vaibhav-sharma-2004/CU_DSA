#include<iostream>
using namespace std;

int main(){

    int i=1;

    while(i<=10){

        if(i==5){
            break;
        }

        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    cout<<i<<endl;

    return 0;
}