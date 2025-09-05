#include<iostream>
using namespace std;

int main(){

    int intitial=0;
    int last=300;
    int step=20;

    //initialization
    int f=intitial;

    //loop condition
    while(f<=300){

        //work
        float c= (float(5)/9) * (f-32);
        cout<<c<<endl;
        //updation
        f=f+step;
    }

    return 0;
}